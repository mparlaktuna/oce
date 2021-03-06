// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSAlgo_HeaderFile
#define _XSAlgo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_XSAlgo_AlgoContainer.hxx>
class XSAlgo_AlgoContainer;
class XSAlgo_ToolContainer;
class XSAlgo_AlgoContainer;



class XSAlgo 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Provides initerface to the algorithms from Shape Healing
  //! and others for XSTEP processors.
  //! Creates and initializes default AlgoContainer.
  Standard_EXPORT static   void Init() ;
  
  //! Sets default AlgoContainer
  Standard_EXPORT static   void SetAlgoContainer (const Handle(XSAlgo_AlgoContainer)& aContainer) ;
  
  //! Returns default AlgoContainer
  Standard_EXPORT static   Handle(XSAlgo_AlgoContainer) AlgoContainer() ;




protected:





private:




friend class XSAlgo_ToolContainer;
friend class XSAlgo_AlgoContainer;

};







#endif // _XSAlgo_HeaderFile
