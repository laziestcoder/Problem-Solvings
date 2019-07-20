<?php require_once ("db_object.php");?>
<?php

class City extends DB_object
{
    protected static $db_table = "tbl_city";
    protected static $db_table_field = array('city_name', 'city_description', 'div_id', 'city_image');

    public $id;
    public $city_name;
    public $city_description;
    public $div_id;
    public $city_image;

    public static function get_image($file)
    {
        $image = $file['name'];
        return $image;
    }

    public function image_path()
    {
        $location = '../images/cities/';
        return $location . $this->city_image;
    }

    public static function all_cities()
    {
        global $database;

        $query = "SELECT tbl_city.id, city_name, city_description, div_name, city_image FROM tbl_city";
        $query .= " INNER JOIN tbl_division ";
        $query .= "ON tbl_city.div_id = tbl_division.id ORDER BY tbl_city.id";

        return $database->query($query);
    }
}

?>