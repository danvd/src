#include <sys/param.h>
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/timeout.h>
#include <sys/malloc.h>
#include <sys/mbuf.h>
#include <sys/socket.h>
#include <sys/syslog.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <net/if_var.h>
#include <net/if_types.h>
#include <net/if_l2tp.h>
#include <netinet/in.h>
#include <netinet/if_ether.h>

/* management routines */
void l2tpattach(int);

LIST_HEAD(l2tp_softc_head, l2tp_softc) l2tp_softc_list;



void
l2tpattach(int count)
{

  LIST_INIT(&l2tp_softc_list);
  
}
