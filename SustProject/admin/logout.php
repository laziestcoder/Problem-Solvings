<?php require_once("includes/header.php"); ?>
<?php require_once("includes/top_nav.php"); ?>
<?php require_once("includes/side_nav.php"); ?>
<?php require_once ("../includes/session.php"); ?>
<?php require_once ("../includes/init.php");?>

<?php
$session->admin_logout();
header("location:login.php");

?>
