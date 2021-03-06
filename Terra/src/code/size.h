!	type declarations
	integer mt, nt, nd, nr, ndo, nv
	integer pl_size

!	Number of grid intervals along icosahedral diamond edge:
	parameter(mt=256)
 
!	Number of grid intervals along edge of local subdomain:
	parameter(nt=16)
 
!	Number of diamonds mapped to a local process (5 or 10):
 	parameter(nd=10)

!	Note: Number of processes is given by (mt/nt)**2*10/nd.
 
!	Number of radial layers:
	parameter(nr=mt/2)
 
!	Number of diamonds dimension for opr array (1, 5 or 10):
	parameter(ndo= nd)

!	Note:  If there is no lateral viscosity variation, ndo may
!				be set to 1; otherwise, it must be set equal to nd.
 
!	Number of grid points (vertices) in local subdomain:
	parameter(nv= (nt+1)**2*nd*(nr+1))

!	Parameter for plate implementation
	parameter(pl_size=500)

