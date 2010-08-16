/*
 boost header: BOOST_NUMERIC_ODEINT/standard_algebra.hpp

 Copyright 2009 Karsten Ahnert
 Copyright 2009 Mario Mulansky
 Copyright 2009 Andre Bergner

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_BOOST_NUMERIC_ODEINT_STANDARD_ALGEBRA_HPP_INCLUDED
#define BOOST_BOOST_NUMERIC_ODEINT_STANDARD_ALGEBRA_HPP_INCLUDED

//boost range does not work with nvcc
#ifndef __CUDACC__
#include <boost/range.hpp>
#endif

#include <boost/numeric/odeint/algebra/detail/macros.hpp>
#include <boost/numeric/odeint/algebra/detail/for_each.hpp>
#include <boost/numeric/odeint/algebra/detail/reduce.hpp>

namespace boost {
namespace numeric {
namespace odeint {

template< class Container >
struct standard_algebra
{
    // leave standard algebra empty when using nvcc cause we don't habe boost::range then
    // for using thrust and compiling with nvcc thrust_algebra should be used
#ifndef __CUDACC__
    typedef Container container_type;

	template< class StateType1 , class StateType2 , class Operation >
	static void for_each2( StateType1 &s1 , StateType2 &s2 , Operation op )
	{
		// ToDo : check that number of arguments of the operation is equal 2
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType1 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType2 , container_type );

		detail::for_each2( boost::begin( s1 ) , boost::end( s1 ) ,
		                   boost::begin( s2 ) , op	);
	}



	template< class StateType1 , class StateType2 , class StateType3 , class Operation >
	static void for_each3( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , Operation op )
	{
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType1 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType2 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType3 , container_type );

		detail::for_each3( boost::begin( s1 ) , boost::end( s1 ) ,
						   boost::begin( s2 ) ,
						   boost::begin( s3 ) ,
						   op	);
	}




	template< class StateType1 , class StateType2 , class StateType3 , class StateType4 , class Operation >
	static void for_each4( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 , Operation op )
	{
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType1 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType2 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType3 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType4 , container_type );

		detail::for_each4( boost::begin( s1 ) , boost::end( s1 ) ,
						   boost::begin( s2 ) ,
						   boost::begin( s3 ) ,
						   boost::begin( s4 ) ,
						   op	);
	}




	template< class StateType1 , class StateType2 , class StateType3 , class StateType4 , class StateType5 , class Operation >
	static void for_each5( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 , StateType5 &s5 , Operation op )
	{
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType1 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType2 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType3 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType4 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType5 , container_type );

		detail::for_each5( boost::begin( s1 ) , boost::end( s1 ) ,
						   boost::begin( s2 ) ,
						   boost::begin( s3 ) ,
						   boost::begin( s4 ) ,
						   boost::begin( s5 ) ,
						   op	);
	}




	template< class StateType1 , class StateType2 , class StateType3 , class StateType4 , class StateType5 , class StateType6 , class Operation >
	static void for_each6( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 , StateType5 &s5 , StateType6 &s6 , Operation op )
	{
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType1 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType2 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType3 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType4 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType5 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType6 , container_type );

		detail::for_each6( boost::begin( s1 ) , boost::end( s1 ) ,
						   boost::begin( s2 ) ,
						   boost::begin( s3 ) ,
						   boost::begin( s4 ) ,
						   boost::begin( s5 ) ,
						   boost::begin( s6 ) ,
						   op	);
	}



	template< class StateType1 , class StateType2 , class StateType3 , class StateType4 , class StateType5 , class StateType6 ,class StateType7 , class Operation >
	static void for_each7( StateType1 &s1 , StateType2 &s2 , StateType3 &s3 , StateType4 &s4 , StateType5 &s5 , StateType6 &s6 , StateType7 &s7 , Operation op )
	{
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType1 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType2 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType3 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType4 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType5 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType6 , container_type );
		BOOST_ODEINT_CHECK_CONTAINER_TYPE( StateType7 , container_type );

		detail::for_each7( boost::begin( s1 ) , boost::end( s1 ) ,
						   boost::begin( s2 ) ,
						   boost::begin( s3 ) ,
						   boost::begin( s4 ) ,
						   boost::begin( s5 ) ,
						   boost::begin( s6 ) ,
						   boost::begin( s7 ) ,
						   op	);
	}

	template< class ValueType , class StateType , class Reduction >
	static ValueType reduce( StateType &s , Reduction red , ValueType init)
	{
		return detail::reduce( boost::begin( s ) , boost::end( s ) , red , init );
	}

#endif
};

} // odeint
} // numeric
} // boost


#endif //BOOST_BOOST_NUMERIC_ODEINT_STANDARD_ALGEBRA_HPP_INCLUDED
