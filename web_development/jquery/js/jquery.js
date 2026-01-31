$(document).ready(function () {
    console.log($);
    $('p').click(function () {
        console.log(this);
        $(this).hide();
    });
    $("#second").click(function () {
        console.log("second clicked");
    });
});
