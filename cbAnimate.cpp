#include "lab.h"
void cbAnimate(void*)
{
	static int i = 0; // only initialize it the first time
	gb->image(gifs[i]);
	i = (i + 1) % g.frames;
	

	dw->redraw();
	Fl::repeat_timeout(1.0/30,cbAnimate);
	
}
