#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45de901e99b61471_222_new,"openfl.geom.Rectangle","new",0xe1148d6d,"openfl.geom.Rectangle.new","openfl/geom/Rectangle.hx",222,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_240_clone,"openfl.geom.Rectangle","clone",0x6896edaa,"openfl.geom.Rectangle.clone","openfl/geom/Rectangle.hx",240,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_254_contains,"openfl.geom.Rectangle","contains",0x39912df2,"openfl.geom.Rectangle.contains","openfl/geom/Rectangle.hx",254,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_270_containsPoint,"openfl.geom.Rectangle","containsPoint",0xa42628fe,"openfl.geom.Rectangle.containsPoint","openfl/geom/Rectangle.hx",270,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_286_containsRect,"openfl.geom.Rectangle","containsRect",0x6ba48836,"openfl.geom.Rectangle.containsRect","openfl/geom/Rectangle.hx",286,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_303_copyFrom,"openfl.geom.Rectangle","copyFrom",0xd576df92,"openfl.geom.Rectangle.copyFrom","openfl/geom/Rectangle.hx",303,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_325_equals,"openfl.geom.Rectangle","equals",0xcd1e1752,"openfl.geom.Rectangle.equals","openfl/geom/Rectangle.hx",325,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_354_inflate,"openfl.geom.Rectangle","inflate",0x84b46414,"openfl.geom.Rectangle.inflate","openfl/geom/Rectangle.hx",354,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_384_inflatePoint,"openfl.geom.Rectangle","inflatePoint",0xf7c1779c,"openfl.geom.Rectangle.inflatePoint","openfl/geom/Rectangle.hx",384,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_404_intersection,"openfl.geom.Rectangle","intersection",0x4de95b9c,"openfl.geom.Rectangle.intersection","openfl/geom/Rectangle.hx",404,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_443_intersectionToOutput,"openfl.geom.Rectangle","intersectionToOutput",0x47c9ca98,"openfl.geom.Rectangle.intersectionToOutput","openfl/geom/Rectangle.hx",443,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_484_intersects,"openfl.geom.Rectangle","intersects",0xc0fc7147,"openfl.geom.Rectangle.intersects","openfl/geom/Rectangle.hx",484,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_507_isEmpty,"openfl.geom.Rectangle","isEmpty",0x84f8a5d0,"openfl.geom.Rectangle.isEmpty","openfl/geom/Rectangle.hx",507,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_518_offset,"openfl.geom.Rectangle","offset",0x6d6ac0a6,"openfl.geom.Rectangle.offset","openfl/geom/Rectangle.hx",518,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_531_offsetPoint,"openfl.geom.Rectangle","offsetPoint",0xf09849ca,"openfl.geom.Rectangle.offsetPoint","openfl/geom/Rectangle.hx",531,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_546_setEmpty,"openfl.geom.Rectangle","setEmpty",0x8b24775e,"openfl.geom.Rectangle.setEmpty","openfl/geom/Rectangle.hx",546,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_558_setTo,"openfl.geom.Rectangle","setTo",0x9a636c0a,"openfl.geom.Rectangle.setTo","openfl/geom/Rectangle.hx",558,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_567_toString,"openfl.geom.Rectangle","toString",0x4584a47f,"openfl.geom.Rectangle.toString","openfl/geom/Rectangle.hx",567,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_585_union,"openfl.geom.Rectangle","union",0xc71b3f5c,"openfl.geom.Rectangle.union","openfl/geom/Rectangle.hx",585,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_620_unionToOutput,"openfl.geom.Rectangle","unionToOutput",0x1f256e58,"openfl.geom.Rectangle.unionToOutput","openfl/geom/Rectangle.hx",620,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_647___contract,"openfl.geom.Rectangle","__contract",0xb7fb00c5,"openfl.geom.Rectangle.__contract","openfl/geom/Rectangle.hx",647,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_670___expand,"openfl.geom.Rectangle","__expand",0x79b82d4d,"openfl.geom.Rectangle.__expand","openfl/geom/Rectangle.hx",670,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_699___toLimeRectangle,"openfl.geom.Rectangle","__toLimeRectangle",0x990c368c,"openfl.geom.Rectangle.__toLimeRectangle","openfl/geom/Rectangle.hx",699,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_711___transform,"openfl.geom.Rectangle","__transform",0x05478859,"openfl.geom.Rectangle.__transform","openfl/geom/Rectangle.hx",711,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_747_get_bottom,"openfl.geom.Rectangle","get_bottom",0x33110547,"openfl.geom.Rectangle.get_bottom","openfl/geom/Rectangle.hx",747,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_751_set_bottom,"openfl.geom.Rectangle","set_bottom",0x368ea3bb,"openfl.geom.Rectangle.set_bottom","openfl/geom/Rectangle.hx",751,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_758_get_bottomRight,"openfl.geom.Rectangle","get_bottomRight",0xb804f515,"openfl.geom.Rectangle.get_bottomRight","openfl/geom/Rectangle.hx",758,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_762_set_bottomRight,"openfl.geom.Rectangle","set_bottomRight",0xb3d07221,"openfl.geom.Rectangle.set_bottomRight","openfl/geom/Rectangle.hx",762,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_770_get_left,"openfl.geom.Rectangle","get_left",0xd4809763,"openfl.geom.Rectangle.get_left","openfl/geom/Rectangle.hx",770,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_774_set_left,"openfl.geom.Rectangle","set_left",0x82ddf0d7,"openfl.geom.Rectangle.set_left","openfl/geom/Rectangle.hx",774,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_782_get_right,"openfl.geom.Rectangle","get_right",0x9310ed00,"openfl.geom.Rectangle.get_right","openfl/geom/Rectangle.hx",782,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_786_set_right,"openfl.geom.Rectangle","set_right",0x7661d90c,"openfl.geom.Rectangle.set_right","openfl/geom/Rectangle.hx",786,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_793_get_size,"openfl.geom.Rectangle","get_size",0xd924301d,"openfl.geom.Rectangle.get_size","openfl/geom/Rectangle.hx",793,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_797_set_size,"openfl.geom.Rectangle","set_size",0x87818991,"openfl.geom.Rectangle.set_size","openfl/geom/Rectangle.hx",797,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_805_get_top,"openfl.geom.Rectangle","get_top",0x9f65f6b9,"openfl.geom.Rectangle.get_top","openfl/geom/Rectangle.hx",805,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_809_set_top,"openfl.geom.Rectangle","set_top",0x926787c5,"openfl.geom.Rectangle.set_top","openfl/geom/Rectangle.hx",809,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_817_get_topLeft,"openfl.geom.Rectangle","get_topLeft",0x00437b60,"openfl.geom.Rectangle.get_topLeft","openfl/geom/Rectangle.hx",817,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_821_set_topLeft,"openfl.geom.Rectangle","set_topLeft",0x0ab0826c,"openfl.geom.Rectangle.set_topLeft","openfl/geom/Rectangle.hx",821,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_65_boot,"openfl.geom.Rectangle","boot",0x09003285,"openfl.geom.Rectangle.boot","openfl/geom/Rectangle.hx",65,0xf2fb2b03)
HX_LOCAL_STACK_FRAME(_hx_pos_45de901e99b61471_66_boot,"openfl.geom.Rectangle","boot",0x09003285,"openfl.geom.Rectangle.boot","openfl/geom/Rectangle.hx",66,0xf2fb2b03)
namespace openfl{
namespace geom{

void Rectangle_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float width = __o_width.Default(0);
            		Float height = __o_height.Default(0);
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_222_new)
HXLINE( 223)		this->x = x;
HXLINE( 224)		this->y = y;
HXLINE( 225)		this->width = width;
HXLINE( 226)		this->height = height;
            	}

Dynamic Rectangle_obj::__CreateEmpty() { return new Rectangle_obj; }

void *Rectangle_obj::_hx_vtable = 0;

Dynamic Rectangle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Rectangle_obj > _hx_result = new Rectangle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Rectangle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e421103;
}

 ::openfl::geom::Rectangle Rectangle_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_240_clone)
HXDLIN( 240)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->x,this->y,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_254_contains)
HXDLIN( 254)		bool _hx_tmp;
HXDLIN( 254)		bool _hx_tmp1;
HXDLIN( 254)		if ((x >= this->x)) {
HXDLIN( 254)			_hx_tmp1 = (y >= this->y);
            		}
            		else {
HXDLIN( 254)			_hx_tmp1 = false;
            		}
HXDLIN( 254)		if (_hx_tmp1) {
HXDLIN( 254)			_hx_tmp = (x < this->get_right());
            		}
            		else {
HXDLIN( 254)			_hx_tmp = false;
            		}
HXDLIN( 254)		if (_hx_tmp) {
HXDLIN( 254)			return (y < this->get_bottom());
            		}
            		else {
HXDLIN( 254)			return false;
            		}
HXDLIN( 254)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_270_containsPoint)
HXDLIN( 270)		return this->contains(point->x,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_286_containsRect)
HXDLIN( 286)		bool _hx_tmp;
HXDLIN( 286)		if (!((rect->width <= 0))) {
HXDLIN( 286)			_hx_tmp = (rect->height <= 0);
            		}
            		else {
HXDLIN( 286)			_hx_tmp = true;
            		}
HXDLIN( 286)		if (_hx_tmp) {
HXLINE( 288)			bool _hx_tmp;
HXDLIN( 288)			bool _hx_tmp1;
HXDLIN( 288)			if ((rect->x > this->x)) {
HXLINE( 288)				_hx_tmp1 = (rect->y > this->y);
            			}
            			else {
HXLINE( 288)				_hx_tmp1 = false;
            			}
HXDLIN( 288)			if (_hx_tmp1) {
HXLINE( 288)				Float _hx_tmp1 = rect->get_right();
HXDLIN( 288)				_hx_tmp = (_hx_tmp1 < this->get_right());
            			}
            			else {
HXLINE( 288)				_hx_tmp = false;
            			}
HXDLIN( 288)			if (_hx_tmp) {
HXLINE( 288)				Float _hx_tmp = rect->get_bottom();
HXDLIN( 288)				return (_hx_tmp < this->get_bottom());
            			}
            			else {
HXLINE( 288)				return false;
            			}
            		}
            		else {
HXLINE( 292)			bool _hx_tmp;
HXDLIN( 292)			bool _hx_tmp1;
HXDLIN( 292)			if ((rect->x >= this->x)) {
HXLINE( 292)				_hx_tmp1 = (rect->y >= this->y);
            			}
            			else {
HXLINE( 292)				_hx_tmp1 = false;
            			}
HXDLIN( 292)			if (_hx_tmp1) {
HXLINE( 292)				Float _hx_tmp1 = rect->get_right();
HXDLIN( 292)				_hx_tmp = (_hx_tmp1 <= this->get_right());
            			}
            			else {
HXLINE( 292)				_hx_tmp = false;
            			}
HXDLIN( 292)			if (_hx_tmp) {
HXLINE( 292)				Float _hx_tmp = rect->get_bottom();
HXDLIN( 292)				return (_hx_tmp <= this->get_bottom());
            			}
            			else {
HXLINE( 292)				return false;
            			}
            		}
HXLINE( 286)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

void Rectangle_obj::copyFrom( ::openfl::geom::Rectangle sourceRect){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_303_copyFrom)
HXLINE( 304)		this->x = sourceRect->x;
HXLINE( 305)		this->y = sourceRect->y;
HXLINE( 306)		this->width = sourceRect->width;
HXLINE( 307)		this->height = sourceRect->height;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,copyFrom,(void))

bool Rectangle_obj::equals( ::openfl::geom::Rectangle toCompare){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_325_equals)
HXDLIN( 325)		if (::hx::IsInstanceEq( toCompare,::hx::ObjectPtr<OBJ_>(this) )) {
HXDLIN( 325)			return true;
            		}
            		else {
HXLINE( 327)			bool _hx_tmp;
HXDLIN( 327)			bool _hx_tmp1;
HXDLIN( 327)			bool _hx_tmp2;
HXDLIN( 327)			if (::hx::IsNotNull( toCompare )) {
HXLINE( 327)				_hx_tmp2 = (this->x == toCompare->x);
            			}
            			else {
HXLINE( 327)				_hx_tmp2 = false;
            			}
HXDLIN( 327)			if (_hx_tmp2) {
HXLINE( 327)				_hx_tmp1 = (this->y == toCompare->y);
            			}
            			else {
HXLINE( 327)				_hx_tmp1 = false;
            			}
HXDLIN( 327)			if (_hx_tmp1) {
HXLINE( 327)				_hx_tmp = (this->width == toCompare->width);
            			}
            			else {
HXLINE( 327)				_hx_tmp = false;
            			}
HXDLIN( 327)			if (_hx_tmp) {
HXLINE( 327)				return (this->height == toCompare->height);
            			}
            			else {
HXLINE( 327)				return false;
            			}
            		}
HXLINE( 325)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

void Rectangle_obj::inflate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_354_inflate)
HXLINE( 355)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 355)		_hx_tmp->x = (_hx_tmp->x - dx);
HXLINE( 356)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 356)		_hx_tmp1->width = (_hx_tmp1->width + (dx * ( (Float)(2) )));
HXLINE( 357)		 ::openfl::geom::Rectangle _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 357)		_hx_tmp2->y = (_hx_tmp2->y - dy);
HXLINE( 358)		 ::openfl::geom::Rectangle _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 358)		_hx_tmp3->height = (_hx_tmp3->height + (dy * ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

void Rectangle_obj::inflatePoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_384_inflatePoint)
HXDLIN( 384)		this->inflate(point->x,point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

 ::openfl::geom::Rectangle Rectangle_obj::intersection( ::openfl::geom::Rectangle toIntersect){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_404_intersection)
HXLINE( 405)		Float x0;
HXDLIN( 405)		if ((this->x < toIntersect->x)) {
HXLINE( 405)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 405)			x0 = this->x;
            		}
HXLINE( 406)		Float x1;
HXDLIN( 406)		Float x11 = this->get_right();
HXDLIN( 406)		if ((x11 > toIntersect->get_right())) {
HXLINE( 406)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 406)			x1 = this->get_right();
            		}
HXLINE( 408)		if ((x1 <= x0)) {
HXLINE( 410)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 413)		Float y0;
HXDLIN( 413)		if ((this->y < toIntersect->y)) {
HXLINE( 413)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 413)			y0 = this->y;
            		}
HXLINE( 414)		Float y1;
HXDLIN( 414)		Float y11 = this->get_bottom();
HXDLIN( 414)		if ((y11 > toIntersect->get_bottom())) {
HXLINE( 414)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 414)			y1 = this->get_bottom();
            		}
HXLINE( 416)		if ((y1 <= y0)) {
HXLINE( 418)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 421)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x0,y0,(x1 - x0),(y1 - y0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

 ::openfl::geom::Rectangle Rectangle_obj::intersectionToOutput( ::openfl::geom::Rectangle toIntersect, ::openfl::geom::Rectangle output){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_443_intersectionToOutput)
HXLINE( 444)		if (::hx::IsNull( output )) {
HXLINE( 446)			output =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 449)		Float x0;
HXDLIN( 449)		if ((this->x < toIntersect->x)) {
HXLINE( 449)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 449)			x0 = this->x;
            		}
HXLINE( 450)		Float x1;
HXDLIN( 450)		Float x11 = this->get_right();
HXDLIN( 450)		if ((x11 > toIntersect->get_right())) {
HXLINE( 450)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 450)			x1 = this->get_right();
            		}
HXLINE( 452)		if ((x1 <= x0)) {
HXLINE( 454)			output->setTo(((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0));
HXLINE( 455)			return output;
            		}
HXLINE( 458)		Float y0;
HXDLIN( 458)		if ((this->y < toIntersect->y)) {
HXLINE( 458)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 458)			y0 = this->y;
            		}
HXLINE( 459)		Float y1;
HXDLIN( 459)		Float y11 = this->get_bottom();
HXDLIN( 459)		if ((y11 > toIntersect->get_bottom())) {
HXLINE( 459)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 459)			y1 = this->get_bottom();
            		}
HXLINE( 461)		if ((y1 <= y0)) {
HXLINE( 463)			output->setTo(((Float)0.0),((Float)0.0),((Float)0.0),((Float)0.0));
HXLINE( 464)			return output;
            		}
HXLINE( 467)		output->setTo(x0,y0,(x1 - x0),(y1 - y0));
HXLINE( 468)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,intersectionToOutput,return )

bool Rectangle_obj::intersects( ::openfl::geom::Rectangle toIntersect){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_484_intersects)
HXLINE( 485)		Float x0;
HXDLIN( 485)		if ((this->x < toIntersect->x)) {
HXLINE( 485)			x0 = toIntersect->x;
            		}
            		else {
HXLINE( 485)			x0 = this->x;
            		}
HXLINE( 486)		Float x1;
HXDLIN( 486)		Float x11 = this->get_right();
HXDLIN( 486)		if ((x11 > toIntersect->get_right())) {
HXLINE( 486)			x1 = toIntersect->get_right();
            		}
            		else {
HXLINE( 486)			x1 = this->get_right();
            		}
HXLINE( 488)		if ((x1 <= x0)) {
HXLINE( 490)			return false;
            		}
HXLINE( 493)		Float y0;
HXDLIN( 493)		if ((this->y < toIntersect->y)) {
HXLINE( 493)			y0 = toIntersect->y;
            		}
            		else {
HXLINE( 493)			y0 = this->y;
            		}
HXLINE( 494)		Float y1;
HXDLIN( 494)		Float y11 = this->get_bottom();
HXDLIN( 494)		if ((y11 > toIntersect->get_bottom())) {
HXLINE( 494)			y1 = toIntersect->get_bottom();
            		}
            		else {
HXLINE( 494)			y1 = this->get_bottom();
            		}
HXLINE( 496)		return (y1 > y0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_507_isEmpty)
HXDLIN( 507)		if (!((this->width <= 0))) {
HXDLIN( 507)			return (this->height <= 0);
            		}
            		else {
HXDLIN( 507)			return true;
            		}
HXDLIN( 507)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

void Rectangle_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_518_offset)
HXLINE( 519)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 519)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE( 520)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 520)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

void Rectangle_obj::offsetPoint( ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_531_offsetPoint)
HXLINE( 532)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 532)		_hx_tmp->x = (_hx_tmp->x + point->x);
HXLINE( 533)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 533)		_hx_tmp1->y = (_hx_tmp1->y + point->y);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

void Rectangle_obj::setEmpty(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_546_setEmpty)
HXDLIN( 546)		this->x = (this->y = (this->width = (this->height = ( (Float)(0) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

void Rectangle_obj::setTo(Float xa,Float ya,Float widtha,Float heighta){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_558_setTo)
HXLINE( 559)		this->x = xa;
HXLINE( 560)		this->y = ya;
HXLINE( 561)		this->width = widtha;
HXLINE( 562)		this->height = heighta;
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::String Rectangle_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_567_toString)
HXDLIN( 567)		return ((((((((HX_("(x=",ed,c2,1e,00) + this->x) + HX_(", y=",18,15,2e,1d)) + this->y) + HX_(", width=",eb,04,57,53)) + this->width) + HX_(", height=",82,32,07,68)) + this->height) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,toString,return )

 ::openfl::geom::Rectangle Rectangle_obj::_hx_union( ::openfl::geom::Rectangle toUnion){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_585_union)
HXLINE( 586)		bool _hx_tmp;
HXDLIN( 586)		if ((this->width != 0)) {
HXLINE( 586)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 586)			_hx_tmp = true;
            		}
HXDLIN( 586)		if (_hx_tmp) {
HXLINE( 588)			return toUnion->clone();
            		}
            		else {
HXLINE( 590)			bool _hx_tmp;
HXDLIN( 590)			if ((toUnion->width != 0)) {
HXLINE( 590)				_hx_tmp = (toUnion->height == 0);
            			}
            			else {
HXLINE( 590)				_hx_tmp = true;
            			}
HXDLIN( 590)			if (_hx_tmp) {
HXLINE( 592)				return this->clone();
            			}
            		}
HXLINE( 595)		Float x0;
HXDLIN( 595)		if ((this->x > toUnion->x)) {
HXLINE( 595)			x0 = toUnion->x;
            		}
            		else {
HXLINE( 595)			x0 = this->x;
            		}
HXLINE( 596)		Float x1;
HXDLIN( 596)		Float x11 = this->get_right();
HXDLIN( 596)		if ((x11 < toUnion->get_right())) {
HXLINE( 596)			x1 = toUnion->get_right();
            		}
            		else {
HXLINE( 596)			x1 = this->get_right();
            		}
HXLINE( 597)		Float y0;
HXDLIN( 597)		if ((this->y > toUnion->y)) {
HXLINE( 597)			y0 = toUnion->y;
            		}
            		else {
HXLINE( 597)			y0 = this->y;
            		}
HXLINE( 598)		Float y1;
HXDLIN( 598)		Float y11 = this->get_bottom();
HXDLIN( 598)		if ((y11 < toUnion->get_bottom())) {
HXLINE( 598)			y1 = toUnion->get_bottom();
            		}
            		else {
HXLINE( 598)			y1 = this->get_bottom();
            		}
HXLINE( 600)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x0,y0,(x1 - x0),(y1 - y0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_hx_union,return )

 ::openfl::geom::Rectangle Rectangle_obj::unionToOutput( ::openfl::geom::Rectangle toUnion, ::openfl::geom::Rectangle output){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_620_unionToOutput)
HXLINE( 621)		if (::hx::IsNull( output )) {
HXLINE( 623)			output =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 626)		bool _hx_tmp;
HXDLIN( 626)		if ((this->width != 0)) {
HXLINE( 626)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 626)			_hx_tmp = true;
            		}
HXDLIN( 626)		if (_hx_tmp) {
HXLINE( 628)			output->setTo(toUnion->x,toUnion->y,toUnion->width,toUnion->height);
HXLINE( 629)			return output;
            		}
            		else {
HXLINE( 631)			bool _hx_tmp;
HXDLIN( 631)			if ((toUnion->width != 0)) {
HXLINE( 631)				_hx_tmp = (toUnion->height == 0);
            			}
            			else {
HXLINE( 631)				_hx_tmp = true;
            			}
HXDLIN( 631)			if (_hx_tmp) {
HXLINE( 633)				output->setTo(this->x,this->y,this->width,this->height);
HXLINE( 634)				return output;
            			}
            		}
HXLINE( 637)		Float x0;
HXDLIN( 637)		if ((this->x > toUnion->x)) {
HXLINE( 637)			x0 = toUnion->x;
            		}
            		else {
HXLINE( 637)			x0 = this->x;
            		}
HXLINE( 638)		Float x1;
HXDLIN( 638)		Float x11 = this->get_right();
HXDLIN( 638)		if ((x11 < toUnion->get_right())) {
HXLINE( 638)			x1 = toUnion->get_right();
            		}
            		else {
HXLINE( 638)			x1 = this->get_right();
            		}
HXLINE( 639)		Float y0;
HXDLIN( 639)		if ((this->y > toUnion->y)) {
HXLINE( 639)			y0 = toUnion->y;
            		}
            		else {
HXLINE( 639)			y0 = this->y;
            		}
HXLINE( 640)		Float y1;
HXDLIN( 640)		Float y11 = this->get_bottom();
HXDLIN( 640)		if ((y11 < toUnion->get_bottom())) {
HXLINE( 640)			y1 = toUnion->get_bottom();
            		}
            		else {
HXLINE( 640)			y1 = this->get_bottom();
            		}
HXLINE( 642)		output->setTo(x0,y0,(x1 - x0),(y1 - y0));
HXLINE( 643)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,unionToOutput,return )

void Rectangle_obj::_hx___contract(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_647___contract)
HXLINE( 648)		bool _hx_tmp;
HXDLIN( 648)		if ((this->width == 0)) {
HXLINE( 648)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 648)			_hx_tmp = false;
            		}
HXDLIN( 648)		if (_hx_tmp) {
HXLINE( 650)			return;
            		}
HXLINE( 653)		Float offsetX = ((Float)0.0);
HXLINE( 654)		Float offsetY = ((Float)0.0);
HXLINE( 655)		Float offsetRight = ((Float)0.0);
HXLINE( 656)		Float offsetBottom = ((Float)0.0);
HXLINE( 658)		if ((this->x < x)) {
HXLINE( 658)			offsetX = (x - this->x);
            		}
HXLINE( 659)		if ((this->y < y)) {
HXLINE( 659)			offsetY = (y - this->y);
            		}
HXLINE( 660)		if ((this->get_right() > (x + width))) {
HXLINE( 660)			offsetRight = ((x + width) - this->get_right());
            		}
HXLINE( 661)		if ((this->get_bottom() > (y + height))) {
HXLINE( 661)			offsetBottom = ((y + height) - this->get_bottom());
            		}
HXLINE( 663)		 ::openfl::geom::Rectangle _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 663)		_hx_tmp1->x = (_hx_tmp1->x + offsetX);
HXLINE( 664)		 ::openfl::geom::Rectangle _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 664)		_hx_tmp2->y = (_hx_tmp2->y + offsetY);
HXLINE( 665)		 ::openfl::geom::Rectangle _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 665)		_hx_tmp3->width = (_hx_tmp3->width + (offsetRight - offsetX));
HXLINE( 666)		 ::openfl::geom::Rectangle _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 666)		_hx_tmp4->height = (_hx_tmp4->height + (offsetBottom - offsetY));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,_hx___contract,(void))

void Rectangle_obj::_hx___expand(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_670___expand)
HXLINE( 671)		bool _hx_tmp;
HXDLIN( 671)		if ((this->width == 0)) {
HXLINE( 671)			_hx_tmp = (this->height == 0);
            		}
            		else {
HXLINE( 671)			_hx_tmp = false;
            		}
HXDLIN( 671)		if (_hx_tmp) {
HXLINE( 673)			this->x = x;
HXLINE( 674)			this->y = y;
HXLINE( 675)			this->width = width;
HXLINE( 676)			this->height = height;
HXLINE( 677)			return;
            		}
HXLINE( 680)		Float cacheRight = this->get_right();
HXLINE( 681)		Float cacheBottom = this->get_bottom();
HXLINE( 683)		if ((this->x > x)) {
HXLINE( 685)			this->x = x;
HXLINE( 686)			this->width = (cacheRight - x);
            		}
HXLINE( 688)		if ((this->y > y)) {
HXLINE( 690)			this->y = y;
HXLINE( 691)			this->height = (cacheBottom - y);
            		}
HXLINE( 693)		if ((cacheRight < (x + width))) {
HXLINE( 693)			this->width = ((x + width) - this->x);
            		}
HXLINE( 694)		if ((cacheBottom < (y + height))) {
HXLINE( 694)			this->height = ((y + height) - this->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,_hx___expand,(void))

 ::lime::math::Rectangle Rectangle_obj::_hx___toLimeRectangle(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_699___toLimeRectangle)
HXLINE( 700)		if (::hx::IsNull( ::openfl::geom::Rectangle_obj::_hx___limeRectangle )) {
HXLINE( 702)			::openfl::geom::Rectangle_obj::_hx___limeRectangle =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 705)		::openfl::geom::Rectangle_obj::_hx___limeRectangle->setTo(this->x,this->y,this->width,this->height);
HXLINE( 706)		return ::openfl::geom::Rectangle_obj::_hx___limeRectangle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,_hx___toLimeRectangle,return )

void Rectangle_obj::_hx___transform( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix m){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_711___transform)
HXLINE( 712)		Float tx0 = ((m->a * this->x) + (m->c * this->y));
HXLINE( 713)		Float tx1 = tx0;
HXLINE( 714)		Float ty0 = ((m->b * this->x) + (m->d * this->y));
HXLINE( 715)		Float ty1 = ty0;
HXLINE( 717)		Float tx = ((m->a * (this->x + this->width)) + (m->c * this->y));
HXLINE( 718)		Float ty = ((m->b * (this->x + this->width)) + (m->d * this->y));
HXLINE( 720)		if ((tx < tx0)) {
HXLINE( 720)			tx0 = tx;
            		}
HXLINE( 721)		if ((ty < ty0)) {
HXLINE( 721)			ty0 = ty;
            		}
HXLINE( 722)		if ((tx > tx1)) {
HXLINE( 722)			tx1 = tx;
            		}
HXLINE( 723)		if ((ty > ty1)) {
HXLINE( 723)			ty1 = ty;
            		}
HXLINE( 725)		tx = ((m->a * (this->x + this->width)) + (m->c * (this->y + this->height)));
HXLINE( 726)		ty = ((m->b * (this->x + this->width)) + (m->d * (this->y + this->height)));
HXLINE( 728)		if ((tx < tx0)) {
HXLINE( 728)			tx0 = tx;
            		}
HXLINE( 729)		if ((ty < ty0)) {
HXLINE( 729)			ty0 = ty;
            		}
HXLINE( 730)		if ((tx > tx1)) {
HXLINE( 730)			tx1 = tx;
            		}
HXLINE( 731)		if ((ty > ty1)) {
HXLINE( 731)			ty1 = ty;
            		}
HXLINE( 733)		tx = ((m->a * this->x) + (m->c * (this->y + this->height)));
HXLINE( 734)		ty = ((m->b * this->x) + (m->d * (this->y + this->height)));
HXLINE( 736)		if ((tx < tx0)) {
HXLINE( 736)			tx0 = tx;
            		}
HXLINE( 737)		if ((ty < ty0)) {
HXLINE( 737)			ty0 = ty;
            		}
HXLINE( 738)		if ((tx > tx1)) {
HXLINE( 738)			tx1 = tx;
            		}
HXLINE( 739)		if ((ty > ty1)) {
HXLINE( 739)			ty1 = ty;
            		}
HXLINE( 741)		rect->setTo((tx0 + m->tx),(ty0 + m->ty),(tx1 - tx0),(ty1 - ty0));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,_hx___transform,(void))

Float Rectangle_obj::get_bottom(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_747_get_bottom)
HXDLIN( 747)		return (this->y + this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom(Float b){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_751_set_bottom)
HXLINE( 752)		this->height = (b - this->y);
HXLINE( 753)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

 ::openfl::geom::Point Rectangle_obj::get_bottomRight(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_758_get_bottomRight)
HXDLIN( 758)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(this->x + this->width),(this->y + this->height));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

 ::openfl::geom::Point Rectangle_obj::set_bottomRight( ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_762_set_bottomRight)
HXLINE( 763)		this->width = (p->x - this->x);
HXLINE( 764)		this->height = (p->y - this->y);
HXLINE( 765)		return p->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_770_get_left)
HXDLIN( 770)		return this->x;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left(Float l){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_774_set_left)
HXLINE( 775)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 775)		_hx_tmp->width = (_hx_tmp->width - (l - this->x));
HXLINE( 776)		this->x = l;
HXLINE( 777)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_782_get_right)
HXDLIN( 782)		return (this->x + this->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right(Float r){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_786_set_right)
HXLINE( 787)		this->width = (r - this->x);
HXLINE( 788)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

 ::openfl::geom::Point Rectangle_obj::get_size(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_793_get_size)
HXDLIN( 793)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->width,this->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

 ::openfl::geom::Point Rectangle_obj::set_size( ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_797_set_size)
HXLINE( 798)		this->width = p->x;
HXLINE( 799)		this->height = p->y;
HXLINE( 800)		return p->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_805_get_top)
HXDLIN( 805)		return this->y;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top(Float t){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_809_set_top)
HXLINE( 810)		 ::openfl::geom::Rectangle _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 810)		_hx_tmp->height = (_hx_tmp->height - (t - this->y));
HXLINE( 811)		this->y = t;
HXLINE( 812)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

 ::openfl::geom::Point Rectangle_obj::get_topLeft(){
            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_817_get_topLeft)
HXDLIN( 817)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

 ::openfl::geom::Point Rectangle_obj::set_topLeft( ::openfl::geom::Point p){
            	HX_STACKFRAME(&_hx_pos_45de901e99b61471_821_set_topLeft)
HXLINE( 822)		this->x = p->x;
HXLINE( 823)		this->y = p->y;
HXLINE( 824)		return p->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )

 ::lime::math::Rectangle Rectangle_obj::_hx___limeRectangle;

 ::lime::utils::ObjectPool Rectangle_obj::_hx___pool;


::hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	::hx::ObjectPtr< Rectangle_obj > __this = new Rectangle_obj();
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height) {
	Rectangle_obj *__this = (Rectangle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Rectangle_obj), false, "openfl.geom.Rectangle"));
	*(void **)__this = Rectangle_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_width,__o_height);
	return __this;
}

Rectangle_obj::Rectangle_obj()
{
}

::hx::Val Rectangle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_right() ); }
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"union") ) { return ::hx::Val( _hx_union_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottom() ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_topLeft() ); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return ::hx::Val( inflate_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return ::hx::Val( isEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return ::hx::Val( setEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"__expand") ) { return ::hx::Val( _hx___expand_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return ::hx::Val( get_right_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return ::hx::Val( set_right_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return ::hx::Val( intersects_dyn() ); }
		if (HX_FIELD_EQ(inName,"__contract") ) { return ::hx::Val( _hx___contract_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return ::hx::Val( get_bottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return ::hx::Val( set_bottom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bottomRight() ); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return ::hx::Val( offsetPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"__transform") ) { return ::hx::Val( _hx___transform_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return ::hx::Val( get_topLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return ::hx::Val( set_topLeft_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return ::hx::Val( containsRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return ::hx::Val( inflatePoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return ::hx::Val( intersection_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return ::hx::Val( containsPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"unionToOutput") ) { return ::hx::Val( unionToOutput_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return ::hx::Val( get_bottomRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return ::hx::Val( set_bottomRight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__toLimeRectangle") ) { return ::hx::Val( _hx___toLimeRectangle_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"intersectionToOutput") ) { return ::hx::Val( intersectionToOutput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Rectangle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__limeRectangle") ) { outValue = ( _hx___limeRectangle ); return true; }
	}
	return false;
}

::hx::Val Rectangle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast<  ::openfl::geom::Point >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_right(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_topLeft(inValue.Cast<  ::openfl::geom::Point >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bottomRight(inValue.Cast<  ::openfl::geom::Point >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Rectangle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__limeRectangle") ) { _hx___limeRectangle=ioValue.Cast<  ::lime::math::Rectangle >(); return true; }
	}
	return false;
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bottom",eb,e6,78,65));
	outFields->push(HX_("bottomRight",f1,a0,f4,4e));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("topLeft",3c,09,c1,e8));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Rectangle_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Rectangle_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::math::Rectangle */ ,(void *) &Rectangle_obj::_hx___limeRectangle,HX_("__limeRectangle",3a,cb,cf,63)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Rectangle_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Rectangle_obj_sMemberFields[] = {
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	HX_("contains",1f,5a,7b,2c),
	HX_("containsPoint",b1,b9,eb,92),
	HX_("containsRect",e3,ce,1c,a6),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("equals",3f,ee,f2,bf),
	HX_("inflate",87,9c,1b,0c),
	HX_("inflatePoint",49,be,39,32),
	HX_("intersection",49,a2,61,88),
	HX_("intersectionToOutput",45,06,1c,4a),
	HX_("intersects",b4,c2,eb,e3),
	HX_("isEmpty",43,de,5f,0c),
	HX_("offset",93,97,3f,60),
	HX_("offsetPoint",bd,37,10,5f),
	HX_("setEmpty",8b,a3,0e,7e),
	HX_("setTo",bd,91,2f,7a),
	HX_("toString",ac,d0,6e,38),
	HX_("union",0f,65,e7,a6),
	HX_("unionToOutput",0b,ff,ea,0d),
	HX_("__contract",32,52,ea,da),
	HX_("__expand",7a,59,a2,6c),
	HX_("__toLimeRectangle",bf,9c,93,92),
	HX_("__transform",4c,76,bf,73),
	HX_("get_bottom",b4,56,00,56),
	HX_("set_bottom",28,f5,7d,59),
	HX_("get_bottomRight",88,58,d6,0f),
	HX_("set_bottomRight",94,d5,a1,0b),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_right",33,68,0d,2d),
	HX_("set_right",3f,54,5e,10),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("get_topLeft",53,69,bb,6e),
	HX_("set_topLeft",5f,70,28,79),
	::String(null()) };

static void Rectangle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::_hx___limeRectangle,"__limeRectangle");
	HX_MARK_MEMBER_NAME(Rectangle_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Rectangle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::_hx___limeRectangle,"__limeRectangle");
	HX_VISIT_MEMBER_NAME(Rectangle_obj::_hx___pool,"__pool");
};

#endif

::hx::Class Rectangle_obj::__mClass;

static ::String Rectangle_obj_sStaticFields[] = {
	HX_("__limeRectangle",3a,cb,cf,63),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void Rectangle_obj::__register()
{
	Rectangle_obj _hx_dummy;
	Rectangle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Rectangle",fb,52,34,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Rectangle_obj::__GetStatic;
	__mClass->mSetStaticField = &Rectangle_obj::__SetStatic;
	__mClass->mMarkFunc = Rectangle_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Rectangle_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Rectangle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Rectangle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Rectangle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Rectangle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Rectangle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Rectangle_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Rectangle _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_65_boot)
HXDLIN(  65)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Rectangle r){
            			HX_STACKFRAME(&_hx_pos_45de901e99b61471_66_boot)
HXLINE(  66)			r->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_45de901e99b61471_65_boot)
HXDLIN(  65)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom
