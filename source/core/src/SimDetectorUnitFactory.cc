/*************************************************************************
 *                                                                       *
 * Copyright (c) 2011 Hirokazu Odaka                                     *
 *                                                                       *
 * This program is free software: you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation, either version 3 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                       *
 *************************************************************************/

#include "SimDetectorUnitFactory.hh"
#include "SimDetectorUnit2DPad.hh"
#include "SimDetectorUnit2DStrip.hh"
#include "SimDetectorUnitScintillator.hh"
#include "MultiChannelData.hh"

namespace comptonsoft {

VRealDetectorUnit* SimDetectorUnitFactory::createDetectorUnit2DPixel()
{
  return new SimDetectorUnit2DPad;
}

VRealDetectorUnit* SimDetectorUnitFactory::createDetectorUnit2DStrip()
{
  return new SimDetectorUnit2DStrip;
}

VRealDetectorUnit* SimDetectorUnitFactory::createDetectorUnitScintillator()
{
  return new SimDetectorUnitScintillator;
}

} /* namespace comptonsoft */