// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_GeometricSet_HeaderFile
#define _StepShape_GeometricSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_GeometricSet_HeaderFile
#include <Handle_StepShape_GeometricSet.hxx>
#endif

#ifndef _Handle_StepShape_HArray1OfGeometricSetSelect_HeaderFile
#include <Handle_StepShape_HArray1OfGeometricSetSelect.hxx>
#endif
#ifndef _StepGeom_GeometricRepresentationItem_HeaderFile
#include <StepGeom_GeometricRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepShape_HArray1OfGeometricSetSelect;
class TCollection_HAsciiString;
class StepShape_GeometricSetSelect;



class StepShape_GeometricSet : public StepGeom_GeometricRepresentationItem {

public:

  //! Returns a GeometricSet <br>
  Standard_EXPORT   StepShape_GeometricSet();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepShape_HArray1OfGeometricSetSelect)& aElements) ;
  
  Standard_EXPORT     void SetElements(const Handle(StepShape_HArray1OfGeometricSetSelect)& aElements) ;
  
  Standard_EXPORT     Handle_StepShape_HArray1OfGeometricSetSelect Elements() const;
  
  Standard_EXPORT     StepShape_GeometricSetSelect ElementsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbElements() const;




  DEFINE_STANDARD_RTTI(StepShape_GeometricSet)

protected:




private: 


Handle_StepShape_HArray1OfGeometricSetSelect elements;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif