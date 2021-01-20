/*!
\file  gklib.c
\brief Various helper routines generated using GKlib's templates

\date   Started 4/12/2007
\author George  
\author Copyright 1997-2009, Regents of the University of Minnesota 
\version\verbatim $Id: gklib.c 10395 2011-06-23 23:28:06Z karypis $ \endverbatim
*/


#include "metislib.h"


/*************************************************************************/
/*! BLAS routines */
/*************************************************************************/
GK_MKBLAS(i,  idx_t,  idx_t)
GK_MKBLAS(r,  real_t, real_t)

/*************************************************************************/
/*! Memory allocation routines */
/*************************************************************************/
GK_MKALLOC(i,    idx_t)
GK_MKALLOC(r,    real_t)
GK_MKALLOC(ikv,  ikv_t)
GK_MKALLOC(rkv,  rkv_t)

/*************************************************************************/
/*! Priority queues routines */
/*************************************************************************/
#define key_gt(a, b) ((a) > (b))
GK_MKPQUEUE(ipq, ipq_t, ikv_t, idx_t, idx_t, ikvmalloc, IDX_MAX, key_gt)
GK_MKPQUEUE(rpq, rpq_t, rkv_t, real_t, idx_t, rkvmalloc, REAL_MAX, key_gt)
#undef key_gt

/*************************************************************************/
/*! Random number generation routines */
/*************************************************************************/
GK_MKRANDOM(i, idx_t, idx_t)

/*************************************************************************/
/*! Utility routines */
/*************************************************************************/
GK_MKARRAY2CSR(i, idx_t)
