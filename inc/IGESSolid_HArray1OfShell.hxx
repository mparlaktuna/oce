// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_HArray1OfShell_HeaderFile
#define _IGESSolid_HArray1OfShell_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSolid_HArray1OfShell.hxx>

#include <IGESSolid_Array1OfShell.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_IGESSolid_Shell.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESSolid_Shell;
class IGESSolid_Array1OfShell;



class IGESSolid_HArray1OfShell : public MMgt_TShared
{

public:

  
    IGESSolid_HArray1OfShell(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESSolid_HArray1OfShell(const Standard_Integer Low, const Standard_Integer Up, const Handle(IGESSolid_Shell)& V);
  
      void Init (const Handle(IGESSolid_Shell)& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESSolid_Shell)& Value) ;
  
     const  Handle(IGESSolid_Shell)& Value (const Standard_Integer Index)  const;
  
      Handle(IGESSolid_Shell)& ChangeValue (const Standard_Integer Index) ;
  
     const  IGESSolid_Array1OfShell& Array1()  const;
  
      IGESSolid_Array1OfShell& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(IGESSolid_HArray1OfShell)

protected:




private: 


  IGESSolid_Array1OfShell myArray;


};

#define ItemHArray1 Handle(IGESSolid_Shell)
#define ItemHArray1_hxx <IGESSolid_Shell.hxx>
#define TheArray1 IGESSolid_Array1OfShell
#define TheArray1_hxx <IGESSolid_Array1OfShell.hxx>
#define TCollection_HArray1 IGESSolid_HArray1OfShell
#define TCollection_HArray1_hxx <IGESSolid_HArray1OfShell.hxx>
#define Handle_TCollection_HArray1 Handle_IGESSolid_HArray1OfShell
#define TCollection_HArray1_Type_() IGESSolid_HArray1OfShell_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _IGESSolid_HArray1OfShell_HeaderFile
