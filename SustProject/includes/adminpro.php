<?php
//require_once("init.php");
class Adminpro extends DB_object
{
    protected static $db_table = "tbl_admin";
    protected static $db_table_field = array('fullname','admin_name', 'admin_password', 'admin_email','mobileno','admin_category','hash','active');


    public $id;
    public $fullname;
    public $admin_name;
    public $admin_password;
    public $admin_email;
    public $mobileno;
    public $admin_category;
    public $hash;
    public $active;

    public static function set_pimage($file)
    {
        $image = basename($file['name']);
        $image_temp = $file['tmp_name'];
        //print_r($image_temp);
        $explode = explode('.', $image);
        $extension = end($explode);
        //print_r($extension);
        $name = substr(md5(time()), 0, 10) . '.' . $extension;
        //print_r($name);
        $location = 'images/users/';

        move_uploaded_file($image_temp, $location . $name);

        return $name;
    }
    public static function set_covimage($file)
    {
        $image = basename($file['name']);
        $image_temp = $file['tmp_name'];
        //print_r($image_temp);
        $explode = explode('.', $image);
        $extension = end($explode);
        //print_r($extension);
        $name = substr(md5(time()), 0, 10) . '.' . $extension;
        //print_r($name);
        $location = 'images/usercov/';

        move_uploaded_file($image_temp, $location . $name);

        return $name;
    }

    public static function get_image($file)
    {
        $image = $file['name'];
        return $image;
    }

    public function image_path()
    {
        $location = 'images/admins/';
        return $location . $this->user_image;
    }
    public function covimage_path()
    {
        $location = 'images/admins/';
        return $location . $this->cov_image;
    }
}

?>