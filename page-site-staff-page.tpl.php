<?php foreach($roles as $role):  ?>
	<?php if(count($role['contacts']) > 0): ?>
		<h3><?php echo $role['label'] ?></h3>
		<table>
			<thead>
				<tr>
					<th>Contact Name</th>
					<th>Job Title</th>
					<th>Email</th>
					<th>Phone</th>
					<th></th>
				</tr>
			</thead>
			<tbody>
				<?php foreach($role['contacts'] as $contact):  ?>
					<tr>
						<td>
							<a href='http://ybusa.6p/civicrm/contact/view?reset=1&cid=<?=$contact['cid']?>'>
								<?php echo $contact['display_name'] ?></td>
							</a>
						<td><?=$contact['job_title']?></td>
						<td><a href="mailto:<?=$contact['email']?>"><?=$contact['email']?></a></td>
						<td><?=$contact['phone']?></td>
						<td>
						<a href='http://ybusa.6p/civicrm/contact/view/rel?action=view&reset=1&cid=<?=$contact['cid']?>&id=<?=$contact['id']?>&rtype=<?=$contact['rtype']?>&selectedChild=rel'>
								view relationship
							</a>
					</tr>
				<?php endforeach; ?>
			</tbody>
		</table>
	<?php endif ?>
<?php endforeach; ?>
