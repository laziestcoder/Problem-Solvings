<?php
class db_util {
    // The database connection
    protected static $connection;
    
    //private $conn;
    // function __construct() {        
	   // // connecting to database
    //     $this->connect();
    // }        
    
    // function __destruct() {        
    //     self::$connection->close();
    // } 
    /**
     * Connect to the database
     * 
     * @return bool false on failure / mysqli MySQLi object instance on success
     */
    public function connect() {    
        // Try and connect to the database
        if(!isset(self::$connection)) {
            // Load configuration as an array. Use the actual location of your configuration file
            include 'var.php';
            self::$connection = new mysqli($servername, $username, $password, $dbname);
        }
        // If connection was not successful, handle the error
        if(self::$connection === false) {
            // Handle error - notify administrator, log to a file, show an error screen, etc.
            echo "Cannot connect to database! Error Message: ", self::$connection->error();
            return false;
        }
        else
        {
            // Must set it.. Otherwise Unicode strings will be broken in query/database. 
            self::$connection->set_charset("utf8");
            if (self::$connection->query("SHOW TABLES LIKE 'ovidhan'")->num_rows==0) {
    #dont use ` instade of ' in query string. sometings it give error for unknow reason
           self::$connection->query("CREATE TABLE IF NOT EXISTS `ovidhan`(
  `id` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `info` TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `word` TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `pron` TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `pos` TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `meaning` TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `synonyms` TEXT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci,
  `total_vote` INT(7) NOT NULL DEFAULT '0',
  `creator_id` INT(10) UNSIGNED DEFAULT '0',
  PRIMARY KEY(`id`)
)") OR die("Table 1 Creation faild!".self::$connection->error); //.$conn->error);
            }
            if (self::$connection->query("SHOW TABLES LIKE 'sow_users'")->num_rows==0) {
    #dont use ` instade of ' in query string. sometings it give error for unknow reason
           self::$connection->query("CREATE TABLE `sow_users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT, 
  `user_login` varchar(60), 
  `user_pass` varchar(64), 
  `user_email` varchar(100), 
  `user_registered` datetime, 
  `display_name` varchar(250),
  PRIMARY KEY (`id`)
)") OR die("Table 2 Creation faild!".self::$connection->error); //.$conn->error);
            }
            if (self::$connection->query("SHOW TABLES LIKE 'sow_vote'")->num_rows==0) {
           self::$connection->query("CREATE TABLE `sow_vote` (
  `entry_id` int(10) unsigned NOT NULL,
  `user_id` int(10) unsigned NOT NULL,
  `vote_value` BOOLEAN NOT NULL
)") OR die("Table 3 Creation faild!".self::$connection->error); //.$conn->error);
            }
            if (self::$connection->query("SHOW TABLES LIKE 'sow_usermeta'")->num_rows==0) {
           self::$connection->query("CREATE TABLE `sow_usermeta` (
  `umeta_id` BIGINT(20) UNSIGNED NOT NULL AUTO_INCREMENT,
  `user_id` BIGINT(20) UNSIGNED NOT NULL DEFAULT '0',
  `meta_key` VARCHAR(255),
  `meta_value` LONGTEXT,
  PRIMARY KEY (`umeta_id`)
)") OR die("Table 4 Creation faild!".self::$connection->error); //.$conn->error);
            }
        }
       return self::$connection;
   }
    /**
     * Query the database
     *
     * @param $query The query string
     * @return mixed The result of the mysqli::query() function
     */
    public function query($query) {
        // Connect to the database
        $connection = $this -> connect();
        // Query the database
        $result = $connection -> query($query);
        return $result;
    }
    /**
     * Prepare the database
     *
     * @param $query The query string
     * @return mixed The result of the mysqli::query() function
     */
    public function prepare($query) {
        // Connect to the database
        $connection = $this -> connect();
        // Query the database
        $result = $connection -> prepare($query);
        return $result;
    }
    /**
     * Fetch rows from the database (SELECT query)
     *
     * @param $query The query string
     * @return bool False on failure / array Database rows on success
     */
    public function select($query) {
        $rows = array();
        $result = $this->query($query);
        if($result === false) {
            return false;
        }
        while ($row = $result -> fetch_assoc()) {
            $rows[] = $row;
        }
        return $rows;
    }
    /**
     * Add features to database
     */
    public function add_user_feature($user_id, $featureName, $featureValue)
    {
        
        $stmt = $this->prepare("INSERT INTO sow_usermeta (user_id,meta_key,meta_value)
        VALUES(?,?,?)");
        $stmt->bind_param("iss", $user_id, $meta_key, $meta_value);
        $meta_key = $featureName;
        $meta_value = $featureValue;
        return $stmt->execute();
    }
    /**
     * @return the user level
     */
    public function get_user_level($user_id)
    {
        $result = $this->query(
            "SELECT meta_value 
            FROM sow_usermeta 
            WHERE user_id='".$user_id."' AND meta_key='".$GLOBALS['_user_level']."'");
        if($result!==FALSE)
        {
            if($result->num_rows == 0)
                return false;
            $firstval = $result->fetch_assoc();
            return $firstval['meta_value'];
        }
    }
    /**
     * Fetch the last error from the database
     * 
     * @return string Database error message
     */
    public function error() {
        $connection = $this -> connect();
        return $connection -> error;
    }
    
    
}
?>