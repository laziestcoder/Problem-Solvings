<script src="../js/jquery.js"></script>
<script src="../js/jquery-ui.js"></script>
<!-- Bootstrap Core JavaScript -->
<script src="../js/bootstrap.min.js"></script>

<script>
    $(function () {
        $('#from_place').autocomplete({
            source: 'includes/data.php'
        });
    });
    $(function () {
        $('#to_place').autocomplete({
            source: 'includes/data.php'
        });
    });
</script>

<script src="../../js/lightbox.js"></script>
<script src="../../js/main.js"></script>
</body>
</html>