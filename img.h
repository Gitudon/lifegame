#define WIDTH 300
#define HEIGHT 300
struct color { unsigned char r, g, b; };
void img_clear(void);
void img_write(void);
void img_fillrect(struct color c, double x, double y, double w, double h);