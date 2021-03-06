// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve_HeaderFile
#define _StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>

#include <Handle_StepGeom_BSplineCurveWithKnots.hxx>
#include <Handle_StepGeom_RationalBSplineCurve.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Handle_StepGeom_HArray1OfCartesianPoint.hxx>
#include <StepGeom_BSplineCurveForm.hxx>
#include <StepData_Logical.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <StepGeom_KnotType.hxx>
#include <Standard_Real.hxx>
class StepGeom_BSplineCurveWithKnots;
class StepGeom_RationalBSplineCurve;
class TCollection_HAsciiString;
class StepGeom_HArray1OfCartesianPoint;
class TColStd_HArray1OfInteger;
class TColStd_HArray1OfReal;



class StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve : public StepGeom_BSplineCurve
{

public:

  
  //! Returns a BSplineCurveWithKnotsAndRationalBSplineCurve
  Standard_EXPORT StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect, const Handle(StepGeom_BSplineCurveWithKnots)& aBSplineCurveWithKnots, const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Integer aDegree, const Handle(StepGeom_HArray1OfCartesianPoint)& aControlPointsList, const StepGeom_BSplineCurveForm aCurveForm, const StepData_Logical aClosedCurve, const StepData_Logical aSelfIntersect, const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities, const Handle(TColStd_HArray1OfReal)& aKnots, const StepGeom_KnotType aKnotSpec, const Handle(TColStd_HArray1OfReal)& aWeightsData) ;
  
  Standard_EXPORT   void SetBSplineCurveWithKnots (const Handle(StepGeom_BSplineCurveWithKnots)& aBSplineCurveWithKnots) ;
  
  Standard_EXPORT   Handle(StepGeom_BSplineCurveWithKnots) BSplineCurveWithKnots()  const;
  
  Standard_EXPORT   void SetRationalBSplineCurve (const Handle(StepGeom_RationalBSplineCurve)& aRationalBSplineCurve) ;
  
  Standard_EXPORT   Handle(StepGeom_RationalBSplineCurve) RationalBSplineCurve()  const;
  
  Standard_EXPORT   void SetKnotMultiplicities (const Handle(TColStd_HArray1OfInteger)& aKnotMultiplicities) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfInteger) KnotMultiplicities()  const;
  
  Standard_EXPORT   Standard_Integer KnotMultiplicitiesValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbKnotMultiplicities()  const;
  
  Standard_EXPORT   void SetKnots (const Handle(TColStd_HArray1OfReal)& aKnots) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) Knots()  const;
  
  Standard_EXPORT   Standard_Real KnotsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbKnots()  const;
  
  Standard_EXPORT   void SetKnotSpec (const StepGeom_KnotType aKnotSpec) ;
  
  Standard_EXPORT   StepGeom_KnotType KnotSpec()  const;
  
  Standard_EXPORT   void SetWeightsData (const Handle(TColStd_HArray1OfReal)& aWeightsData) ;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) WeightsData()  const;
  
  Standard_EXPORT   Standard_Real WeightsDataValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbWeightsData()  const;




  DEFINE_STANDARD_RTTI(StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve)

protected:




private: 


  Handle(StepGeom_BSplineCurveWithKnots) bSplineCurveWithKnots;
  Handle(StepGeom_RationalBSplineCurve) rationalBSplineCurve;


};







#endif // _StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve_HeaderFile
