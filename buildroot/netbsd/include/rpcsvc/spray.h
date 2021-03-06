/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SPRAY_H_RPCGEN
#define _SPRAY_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>

#ifndef _RPCSVC_SPRAY_H_
#define _RPCSVC_SPRAY_H_

#define SPRAYOVERHEAD 86
#define SPRAYMAX 8845

struct spraytimeval {
	u_int sec;
	u_int usec;
};
typedef struct spraytimeval spraytimeval;

struct spraycumul {
	u_int counter;
	spraytimeval clock;
};
typedef struct spraycumul spraycumul;

typedef struct {
	unsigned int sprayarr_len;
	char *sprayarr_val;
} sprayarr;

#endif /* _RPCSVC_SPRAY_H_ */

__BEGIN_DECLS
bool_t xdr_spraytimeval(XDR *, spraytimeval *);
bool_t xdr_spraycumul(XDR *, spraycumul *);
bool_t xdr_sprayarr(XDR *, sprayarr *);
__END_DECLS

#define SPRAYPROG 100012
#define SPRAYVERS 1
#define SPRAYPROC_SPRAY 1
#define SPRAYPROC_GET 2
#define SPRAYPROC_CLEAR 3

__BEGIN_DECLS
void *sprayproc_spray_1(sprayarr *, CLIENT *);
void *sprayproc_spray_1_svc(sprayarr *, struct svc_req *);
spraycumul *sprayproc_get_1(void *, CLIENT *);
spraycumul *sprayproc_get_1_svc(void *, struct svc_req *);
void *sprayproc_clear_1(void *, CLIENT *);
void *sprayproc_clear_1_svc(void *, struct svc_req *);
__END_DECLS

#endif /* !_SPRAY_H_RPCGEN */
