// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_State_HeaderFile
#define _ChFiDS_State_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! This enum describe the  different kinds of extremities
//! of   a   fillet.   OnSame,   Ondiff and  AllSame   are
//! particular cases of BreakPoint   for a corner   with 3
//! edges and three faces :
//! - AllSame means that  the three concavities are on the
//! same side of the Shape,
//! - OnDiff  means  that the  edge of  the  fillet  has a
//! concave side different than the two other edges,
//! - OnSame  means  that the  edge of  the  fillet  has a
//! concave side different than one of the two other edges
//! and identical to the third edge.
enum ChFiDS_State
{
ChFiDS_OnSame,
ChFiDS_OnDiff,
ChFiDS_AllSame,
ChFiDS_BreakPoint,
ChFiDS_FreeBoundary,
ChFiDS_Closed,
ChFiDS_Tangent
};

#endif // _ChFiDS_State_HeaderFile
