// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_FaceBasedSurfaceModel_HeaderFile
#define _StepShape_FaceBasedSurfaceModel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_FaceBasedSurfaceModel_HeaderFile
#include <Handle_StepShape_FaceBasedSurfaceModel.hxx>
#endif

#ifndef _Handle_StepShape_HArray1OfConnectedFaceSet_HeaderFile
#include <Handle_StepShape_HArray1OfConnectedFaceSet.hxx>
#endif
#ifndef _StepGeom_GeometricRepresentationItem_HeaderFile
#include <StepGeom_GeometricRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepShape_HArray1OfConnectedFaceSet;
class TCollection_HAsciiString;


//! Representation of STEP entity FaceBasedSurfaceModel <br>
class StepShape_FaceBasedSurfaceModel : public StepGeom_GeometricRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepShape_FaceBasedSurfaceModel();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Handle(StepShape_HArray1OfConnectedFaceSet)& aFbsmFaces) ;
  //! Returns field FbsmFaces <br>
  Standard_EXPORT     Handle_StepShape_HArray1OfConnectedFaceSet FbsmFaces() const;
  //! Set field FbsmFaces <br>
  Standard_EXPORT     void SetFbsmFaces(const Handle(StepShape_HArray1OfConnectedFaceSet)& FbsmFaces) ;




  DEFINE_STANDARD_RTTI(StepShape_FaceBasedSurfaceModel)

protected:




private: 


Handle_StepShape_HArray1OfConnectedFaceSet theFbsmFaces;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif