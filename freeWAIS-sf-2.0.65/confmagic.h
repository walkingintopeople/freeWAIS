/*
 * This file was produced by running metaconfig and is intended to be included
 * after config.h and after all the other needed includes have been dealt with.
 *
 * This file may be empty, and should not be edited. Rerun metaconfig instead.
 * If you wish to get rid of this magic, remove this file and rerun metaconfig
 * without the -M option.
 *
 *  $Id: confmagic.h,v 2.0 1995/09/08 07:55:52 pfeifer Exp $
 */

#ifndef _confmagic_h_
#define _confmagic_h_

#ifndef HAS_BCOPY
#ifndef bcopy
#define bcopy(s,d,l) memcpy((d),(s),(l))
#endif
#endif

#ifndef HAS_BZERO
#ifndef bzero
#define bzero(s,l) memset((s),0,(l))
#endif
#endif

#ifndef HAS_INDEX
#ifndef index
#define index strchr
#endif
#endif

#ifndef HAS_INDEX
#ifndef rindex
#define rindex strrchr
#endif
#endif

#endif
