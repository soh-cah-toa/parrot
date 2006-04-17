.namespace [ "" ]

.sub 'print'
    .param pmc list            :slurpy
    .local pmc iter

    iter = new .Iterator, list
    iter = 0
  iter_loop:
    unless iter goto iter_end
    $P0 = shift iter
    print $P0
    goto iter_loop
  iter_end:
    .return ()
.end


.sub 'say'
    .param pmc list            :slurpy
    'print'(list :flat)
    print "\n"
    .return ()
.end


.sub 'list'
    .param pmc list            :slurpy
    .return (list)
.end


.sub 'use'
    .param pmc list            :slurpy
    .return ()
.end


.sub 'infix:**'
    .param num base
    .param num exp
    $N0 = pow base, exp
    .return ($N0)
.end


.sub 'die'
    .param pmc list            :slurpy
    .local pmc iter
    .local string message 

    message = ''     
    iter = new .Iterator, list
    iter = 0
  iter_loop:
    unless iter goto iter_end
    $P0 = shift iter
    $S0 = $P0
    message .= $S0
    goto iter_loop
  iter_end:
    $P0 = new .Exception
    $P0['_message'] = message
    throw $P0
    .return ()
.end
