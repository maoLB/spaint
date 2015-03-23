/**
 * spaint: NullSelector.cpp
 */

#include "selectors/NullSelector.h"

namespace spaint {

//#################### CONSTRUCTORS ####################

NullSelector::NullSelector(const Settings_CPtr& settings)
: Selector(settings)
{}

//#################### PUBLIC MEMBER FUNCTIONS ####################

void NullSelector::accept(const SelectorVisitor& visitor) const
{
  visitor.visit(*this);
}

Selector::Selection_CPtr NullSelector::get_selection() const
{
  return Selection_CPtr();
}

void NullSelector::update(const InputState& inputState, const RenderState_CPtr& renderState) {}

}