#include "driver/uart.h"
#include "osapi.h"

void user_init() //��ʼ��
{
	uart_init(57600, 57600);

	// 8266��ΪUDP�����������غ�Ŀ��˿�Ϊ8266��IP��ַ�����ڴ�ӡ
	//udp_services_init();

	// 8266��ΪUDP�ͻ��ˣ����ض˿�Ϊ2000��Ŀ��˿�Ϊ8686��IP��ַ�����ڴ�ӡ
	//udp_client_init();

	// 8266��ΪTCP�����������غ�Ŀ��˿�Ϊ8266��IP��ַ�����ڴ�ӡ
	//tcp_service_init();

	// 8266��ΪTCP�ͻ��ˣ�Ŀ��˿�Ϊ6000��IP��ַ�����ڴ�ӡ����Ҫ�Ȼ�ȡTcp����˵�ip��ַ
	tcp_client_init();

}

void user_rf_pre_init() {

}
