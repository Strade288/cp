<div class="modal fade" id="mediaadd" tabindex="-1" role="dialog" aria-labelledby="mediaadd" aria-hidden="false">
	<div class="modal-dialog">
		<div class="modal-content">
			<div class="modal-header">
				<button type="button" class="close" data-dismiss="modal" aria-hidden="true"><span class="glyphicon glyphicon-remove-circle"></span></button>
				<h4 class="modal-title" id="mediaadd"><span class="glyphicon"></span>Add Key</h4>
			</div>

			<form name="mediaadd" id="mediaadd" class="navbar-form" role="create">

			<div class="row">
				<div class="col-md-6">
					<label for="keyname">Name:</label>
				</div>
				<div class="col-md-6">
					<div class="input">
						<input type="text" class="form-control" placeholder="name" name="keyname" id="keyname"/>
					</div>
				</div>
			</div>

			<div class="row">
				<div class="col-md-6">
					<label for="key">Key:</label>
				</div>
				<div class="col-md-6">
					<div class="input">
						<input type="text" class="form-control" placeholder="key" name="key" id="key"/>
					</div>
				</div>
			</div>

			</form>

			<div class="modal-footer">
				<input class="inp" type="button" class="close" data-dismiss="modal" aria-hidden="true" onclick="xajax_mediaadd(xajax.getFormValues('mediaadd')); return false;" value="Add" />
			</div>
		</div><!-- /.modal-content -->
	</div><!-- /.modal-dialog -->
</div><!-- /.modal -->
