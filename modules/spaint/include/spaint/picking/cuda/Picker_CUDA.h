/**
 * spaint: Picker_CUDA.h
 */

#ifndef H_SPAINT_PICKER_CUDA
#define H_SPAINT_PICKER_CUDA

#include "../interface/Picker.h"

namespace spaint {

/**
 * \brief An instance of this class can be used to pick an individual point in the scene using CUDA.
 */
class Picker_CUDA : public Picker
{
  //#################### PUBLIC MEMBER FUNCTIONS ####################
public:
  /** Override */
  virtual bool pick(int x, int y, const ITMLib::Objects::ITMRenderState *renderState, ORUtils::MemoryBlock<Vector3f>& pickPointMB) const;

  /** Override */
  virtual void to_short(const ORUtils::MemoryBlock<Vector3f>& pickPointFloatMB, ORUtils::MemoryBlock<Vector3s>& pickPointShortMB) const;
};

}

#endif