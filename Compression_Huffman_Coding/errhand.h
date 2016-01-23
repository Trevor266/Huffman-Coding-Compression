#ifndef _ERRHAND_H_
#define _ERRHAND_H_

#ifdef __STDC__

void fatal_error(char *fmt, ...);

#else /*__STDC__*/

void fatal_error();

#endif /*__STDC__*/

#endif /*_ERRHAND_H_*/