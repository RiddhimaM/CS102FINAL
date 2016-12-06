#include "lab.h"
Fl_GIF_Image ** gifs;
void loadimages(std::string s, int frames)
{
	gifs = new Fl_GIF_Image*[frames];
	for(int i = 0; i < frames; i++)
	{
		std::ostringstream oss;
		oss << std::setfill('0') << std::setw(3) << i;
		std::string s = "giphy/g" + oss.str() + ".gif";
		std::cout << s << "\n";
		gifs[i] = new Fl_GIF_Image(s.c_str());
	}
}
