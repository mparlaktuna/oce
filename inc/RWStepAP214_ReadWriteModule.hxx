// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepAP214_ReadWriteModule_HeaderFile
#define _RWStepAP214_ReadWriteModule_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_RWStepAP214_ReadWriteModule.hxx>

#include <StepData_ReadWriteModule.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepData_StepReaderData.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Standard_Transient.hxx>
class TCollection_AsciiString;
class TColStd_SequenceOfAsciiString;
class StepData_StepReaderData;
class Interface_Check;
class Standard_Transient;
class StepData_StepWriter;


//! General module to read and write StepAP214 entities
class RWStepAP214_ReadWriteModule : public StepData_ReadWriteModule
{

public:

  
  Standard_EXPORT RWStepAP214_ReadWriteModule();
  
  //! associates a positive Case Number to each type of StepAP214 entity,
  //! given as a String defined in the EXPRESS form
  Standard_EXPORT   Standard_Integer CaseStep (const TCollection_AsciiString& atype)  const;
  
  //! associates a positive Case Number to each type of StepAP214 Complex entity,
  //! given as a String defined in the EXPRESS form
  Standard_EXPORT virtual   Standard_Integer CaseStep (const TColStd_SequenceOfAsciiString& types)  const;
  
  //! returns True if the Case Number corresponds to a Complex Type
  Standard_EXPORT virtual   Standard_Boolean IsComplex (const Standard_Integer CN)  const;
  
  //! returns a StepType (defined in EXPRESS form which belongs to a
  //! Type of Entity, identified by its CaseNumber determined by Protocol
  Standard_EXPORT  const  TCollection_AsciiString& StepType (const Standard_Integer CN)  const;
  
  Standard_EXPORT virtual   Standard_Boolean ComplexType (const Standard_Integer CN, TColStd_SequenceOfAsciiString& types)  const;
  
  Standard_EXPORT   void ReadStep (const Standard_Integer CN, const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(Standard_Transient)& ent)  const;
  
  Standard_EXPORT   void WriteStep (const Standard_Integer CN, StepData_StepWriter& SW, const Handle(Standard_Transient)& ent)  const;




  DEFINE_STANDARD_RTTI(RWStepAP214_ReadWriteModule)

protected:




private: 




};







#endif // _RWStepAP214_ReadWriteModule_HeaderFile
