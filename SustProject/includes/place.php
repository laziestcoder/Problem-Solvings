<?php

class Place extends DB_object
{
    protected static $db_table = "tbl_place";
    protected static $db_table_field = array('place_name', 'place_description', 'city_id', 'place_image');

    public $id;
    public $place_name;
    public $place_description;
    public $city_id;
    public $place_image;

    public static function get_image($file)
    {
        $image = $file['name'];
        return $image;
    }

    public function image_path()
    {
        $location = '../images/places/';
        return $location . $this->place_image;
    }

    public static function all_places()
    {
        global $database;

        $query = "SELECT tbl_place.id, place_name, place_description, city_name, place_image FROM tbl_place";
        $query .= " INNER JOIN tbl_city ";
        $query .= "ON tbl_place.city_id = tbl_city.id ORDER BY tbl_place.id";

        return $database->query($query);
    }
}

?>