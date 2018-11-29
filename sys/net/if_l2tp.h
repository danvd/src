#ifndef _NET_IF_L2TP_H_
#define _NET_IF_L2TP_H_

struct l2tpconnectionstate {
	char	ifname[IFNAMSIZ];	/* l2tp interface name */
	struct timeval session_time;	/* time the session was established */
};

#endif
