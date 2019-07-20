<?php
ob_start();
require_once("includes/header.php"); ?>
<?php require_once("../includes/init.php"); ?>
<?php require_once("../includes/session.php"); ?>
<!-- Navigation -->
<?php require_once("includes/top_nav.php"); ?>
<!-- Sidebar Menu Items - These collapse to the responsive navigation menu on small screens -->
<?php require_once("includes/side_nav.php"); ?>

<?php
//ob_start();
//ekhan theke
if (!$session->is_admin_signed_in()) {
    header("Location: login.php");
}
else{
    if ($_SESSION["admin_id"]) {
        $id = $_SESSION["admin_id"];
    } else {
        $session->logout();
        redirect("location:login.php");
    }
}

?>

<div id="page-wrapper">

    <div class="container-fluid">

        <!-- Page Heading -->
        <div class="row">
            <div class="col-lg-12">
                <h1 class="page-header">
                    Blank Page
                    <small>Subheading</small>
                </h1>
                <ol class="breadcrumb">
                    <li>
                        <i class="fa fa-dashboard"></i> <a href="index.php">Dashboard</a>
                    </li>
                    <li class="active">
                        <i class="fa fa-file"></i> Blank Page
                    </li>
                </ol>
            </div>
        </div>
        <!-- /.row -->

    </div>
    <!-- /.container-fluid -->

</div>
<!-- /#page-wrapper -->

</div>
<!-- /#wrapper -->

<!-- jQuery -->
<?php require_once("includes/footer.php"); ?>
