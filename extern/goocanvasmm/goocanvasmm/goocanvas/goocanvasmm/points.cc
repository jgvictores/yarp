// Generated by gtkmmproc -- DO NOT MODIFY!


#include <goocanvasmm/points.h>
#include <goocanvasmm/private/points_p.h>

/* Copyright (C) 1998-2006 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <goocanvaspolyline.h>
#include <goocanvasmm/points.h>


namespace Goocanvas
{

Points::Points(int num_points)
  :
   gobject_(goo_canvas_points_new(num_points)) 
{
}

Points::Points(int num_points, const double* coords)
  :
   gobject_(goo_canvas_points_new(num_points)) 
{
  if( coords != NULL )
  {
    //I assume memcpy isn't portable enough.
    for( int i = 0 ; i < num_points*2 ; i++ )
    {
      gobj()->coords[i] = coords[i] ;
    }
  }
}

int
Points::get_num_points() const
{
  return gobj()->num_points ;
}

void
Points::Points::set_coordinate( int index, double x, double y )
{
  gobj()->coords[2*index] = x ;
  gobj()->coords[2*index+1] = y ;
}

void
Points::get_coordinate( int index, double& x, double& y ) const
{
  x = gobj()->coords[2*index] ;
  y = gobj()->coords[2*index+1] ;
}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Goocanvas::Points wrap(GooCanvasPoints* object, bool take_copy)
{
  return Goocanvas::Points(object, take_copy);
}

} // namespace Glib


namespace Goocanvas
{


// static
GType Points::get_type()
{
  return goo_canvas_points_get_type();
}

Points::Points()
:
  gobject_ (0) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

Points::Points(const Points& other)
:
  gobject_ ((other.gobject_) ? goo_canvas_points_ref(other.gobject_) : 0)
{}

Points::Points(GooCanvasPoints* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? goo_canvas_points_ref(gobject) : gobject)
{}

Points& Points::operator=(const Points& other)
{
  Points temp (other);
  swap(temp);
  return *this;
}

Points::~Points()
{
  if(gobject_)
    goo_canvas_points_unref(gobject_);
}

void Points::swap(Points& other)
{
  GooCanvasPoints *const temp = gobject_;
  gobject_ = other.gobject_;
  other.gobject_ = temp;
}

GooCanvasPoints* Points::gobj_copy() const
{
  return goo_canvas_points_ref(gobject_);
}


} // namespace Goocanvas


