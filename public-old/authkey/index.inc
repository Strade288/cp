<?php
require_once($rp.'/cbsd.inc.php');
require_once($rp.'/left_menu.inc.php');
?>

<div class="col-sm-9 col-sm-offset-3 col-md-10 col-md-offset-2 main">


	<h1 class="page-header">Public auth key</h1>
	<div class="row placeholders">
		<div class="col-xs-6 col-sm-2 placeholder">
			<a href="#authkeyadd" data-toggle="modal" data-target="#authkeyadd">
			<div class="btn btn-success">
				<span style="font-size: 30px" class="glyphicon glyphicon-plus gi-5x"></span>
			</div>
			</a>
			<a href="#authkeyadd" data-toggle="modal" data-target="#authkeyadd"><h4>Add Key</h4></a>
			<?php
				require_once("authkey_add.inc");
			?>
		</div>
	</div>

	<h2 class="sub-header">Public auth key</h2>
	<div class="table-responsive">
	<table class="table table-striped">
		<thead>
		<tr>
		<th>Name</th>
		<th>Key</th>
		</tr>
		</thead>
		<tbody>
	<?php
		require_once('show_authkey.php');
		show_authkey();
	?>

</div>
