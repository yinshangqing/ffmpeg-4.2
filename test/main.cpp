extern "C"
{
#include "libavformat/avformat.h"
#include "libavcodec/avcodec.h"
};

#pragma comment(lib, "avformat.lib")
#pragma comment(lib, "avcodec.lib")

int main()
{
	avcodec_register_all();
	avformat_network_init();

	return 0;
}

