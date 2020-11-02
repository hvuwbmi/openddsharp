/*********************************************************************
This file is part of OpenDDSharp.

OpenDDSharp is a .NET wrapper for OpenDDS
Copyright (C) 2018 Jose Morato

OpenDDSharp is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

OpenDDSharp is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with OpenDDSharp. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/
#pragma once
#include "Utils.h"
#include "marshal.h"
#include "QosPolicies.h"
#include "DataReaderListenerImpl.h"

EXTERN_METHOD_EXPORT
::DDS::Entity_ptr DataReader_NarrowBase(::DDS::DataReader_ptr dp);

EXTERN_METHOD_EXPORT
::DDS::ReturnCode_t DataReader_GetMatchedPublications(::DDS::DataReader_ptr dr, void* & ptr);

EXTERN_METHOD_EXPORT
::DDS::ReturnCode_t DataReader_WaitForHistoricalData(::DDS::DataReader_ptr dr, ::DDS::Duration_t max_wait);

EXTERN_METHOD_EXPORT
::DDS::ReturnCode_t DataReader_GetQos(::DDS::DataReader_ptr dr, DataReaderQosWrapper& qos_wrapper);

EXTERN_METHOD_EXPORT
::DDS::ReturnCode_t DataReader_SetQos(::DDS::DataReader_ptr dr, DataReaderQosWrapper qos_wrapper);

EXTERN_METHOD_EXPORT
::DDS::ReturnCode_t DataReader_SetListener(::DDS::DataReader_ptr dr, OpenDDSharp::OpenDDS::DDS::DataReaderListenerImpl_ptr listener, ::DDS::StatusMask mask);