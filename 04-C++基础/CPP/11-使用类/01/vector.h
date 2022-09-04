#ifndef _VECTOR_H
#define _VECTOR_H

#include <iostream>

namespace VECTOR
{ 
	class Vector { 
		public:
			enum Mode {RECT, POL};
		private:
			double x;
			double y;

			double msg;
			double ang;

			Mode mode;

			void set_msg();
			void set_ang();

			void set_x();
			void set_y();
		
		public:
			Vector();
			Vector(double n1, double n2, Mode form = RECT);
			void reset(double n1, double n2, Mode form = RECT);
			~Vector();
			double xval() {return x;}
			double yval() {return y;}
			double msgval() const {return msg;}
			double angval() const {return ang;}
			void polar_mode();
			void rect_mode();

			Vector operator+(const Vector & b) const;
			Vector operator-(const Vector & b) const;
			Vector operator-() const;
			Vector operator*(double n) const;

			friend Vector operator*(double n, const Vector & a);
			friend std::ostream operator<<(std::ostream & os, const Vector & v);
	};

}


#endif /* _VECTOR_H */
