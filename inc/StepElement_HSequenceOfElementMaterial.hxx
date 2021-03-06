// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_HSequenceOfElementMaterial_HeaderFile
#define _StepElement_HSequenceOfElementMaterial_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_HSequenceOfElementMaterial.hxx>

#include <StepElement_SequenceOfElementMaterial.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_StepElement_ElementMaterial.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepElement_ElementMaterial;
class StepElement_SequenceOfElementMaterial;



class StepElement_HSequenceOfElementMaterial : public MMgt_TShared
{

public:

  
    StepElement_HSequenceOfElementMaterial();
  
      Standard_Boolean IsEmpty()  const;
  
      Standard_Integer Length()  const;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   void Append (const Handle(StepElement_ElementMaterial)& anItem) ;
  
  Standard_EXPORT   void Append (const Handle(StepElement_HSequenceOfElementMaterial)& aSequence) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_ElementMaterial)& anItem) ;
  
  Standard_EXPORT   void Prepend (const Handle(StepElement_HSequenceOfElementMaterial)& aSequence) ;
  
  Standard_EXPORT   void Reverse() ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepElement_ElementMaterial)& anItem) ;
  
  Standard_EXPORT   void InsertBefore (const Standard_Integer anIndex, const Handle(StepElement_HSequenceOfElementMaterial)& aSequence) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepElement_ElementMaterial)& anItem) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer anIndex, const Handle(StepElement_HSequenceOfElementMaterial)& aSequence) ;
  
  Standard_EXPORT   void Exchange (const Standard_Integer anIndex, const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT   Handle(StepElement_HSequenceOfElementMaterial) Split (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer anIndex, const Handle(StepElement_ElementMaterial)& anItem) ;
  
  Standard_EXPORT  const  Handle(StepElement_ElementMaterial)& Value (const Standard_Integer anIndex)  const;
  
  Standard_EXPORT   Handle(StepElement_ElementMaterial)& ChangeValue (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer anIndex) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer fromIndex, const Standard_Integer toIndex) ;
  
     const  StepElement_SequenceOfElementMaterial& Sequence()  const;
  
      StepElement_SequenceOfElementMaterial& ChangeSequence() ;




  DEFINE_STANDARD_RTTI(StepElement_HSequenceOfElementMaterial)

protected:




private: 


  StepElement_SequenceOfElementMaterial mySequence;


};

#define Item Handle(StepElement_ElementMaterial)
#define Item_hxx <StepElement_ElementMaterial.hxx>
#define TheSequence StepElement_SequenceOfElementMaterial
#define TheSequence_hxx <StepElement_SequenceOfElementMaterial.hxx>
#define TCollection_HSequence StepElement_HSequenceOfElementMaterial
#define TCollection_HSequence_hxx <StepElement_HSequenceOfElementMaterial.hxx>
#define Handle_TCollection_HSequence Handle_StepElement_HSequenceOfElementMaterial
#define TCollection_HSequence_Type_() StepElement_HSequenceOfElementMaterial_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_




#endif // _StepElement_HSequenceOfElementMaterial_HeaderFile
