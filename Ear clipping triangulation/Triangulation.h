/* Triangulation by ear clipping method codded by Muzkaw : https://www.youtube.com/user/Muzkaw
   Feel free to use it for whatever application
   It is not the most effective way to triangulate large polygons : this algorithm has a O(n^2) or O(n^2*log(n)) complexity
   You must draw the polygon CCW. You can easily modify the program so that it handles both cases
   if you don't want flat triangles, go for the Delaunay triangulation
   You need to link SFML 2.0 or above to run the program
   Happy coding ! */

#include <SFML/Graphics.hpp>
#include <iostream> 
#include <cmath>

using namespace std ;
using namespace sf ;

float determinant(Vector2f u, Vector2f v) ;
float Distance(Vector2f const& v1, Vector2f const& v2) ;
bool collisionTrianglePoint(Vector2f a, Vector2f b, Vector2f c, Vector2f point) ;
vector<Vector2f> triangulate(vector<Vector2f> points) ;