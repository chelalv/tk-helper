#ifndef _MMONITOR_h
#define _MMONITOR_h
#include <mosquitto.h>
extern int connected_l, connected_c;
int mqtt_send(struct mosquitto *mosq, string topic, const char *msg);
extern struct mosquitto *mosq_c;
void mqtt_setup_alicloud();


#endif