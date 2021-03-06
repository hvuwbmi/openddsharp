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
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with OpenDDSharp. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/
#pragma once

#pragma unmanaged 
#include <dds/DdsDcpsInfrastructureC.h>
#pragma managed

#include "QosPolicyCount.h"

#using <System.Core.dll>
#using <System.Linq.dll>

using namespace System::Linq;
using namespace System::Collections::Generic;

namespace OpenDDSharp {
	namespace DDS {

		ref class DataReader;

		/// <summary>
		/// The OfferedIncompatibleQos status indicates that an offered QoS was incompatible with the requested QoS of a <see cref="DataReader" />.
		/// </summary>
		public value struct OfferedIncompatibleQosStatus {

		private:
			System::Int32 total_count;
			System::Int32 total_count_change;
			System::Int32 last_policy_id;
			IEnumerable<OpenDDSharp::DDS::QosPolicyCount^>^ policies;

		public:
			/// <summary>
			/// Gets the cumulative count of times that data readers with incompatible QoS have been found.
			/// </summary>
			property System::Int32 TotalCount {
				System::Int32 get();
			};

			/// <summary>
			/// Gets the incremental change in the total count since the last time this status was accessed.
			/// </summary>
			property System::Int32 TotalCountChange {
				System::Int32 get();
			};

			/// <summary>
			/// Gets one of the QoS policies that was incompatible in the last incompatibility detected.
			/// </summary>
			property System::Int32 LastPolicyId {
				System::Int32 get();
			};

			/// <summary>
			/// Gets the sequence of values that indicates the total number of incompatibilities that have been detected for each QoS policy.
			/// </summary>
			property IEnumerable<OpenDDSharp::DDS::QosPolicyCount^>^ Policies {
				IEnumerable<OpenDDSharp::DDS::QosPolicyCount^>^ get();
			};

		internal:
			OfferedIncompatibleQosStatus(::DDS::OfferedIncompatibleQosStatus status);			
			void FromNative(::DDS::OfferedIncompatibleQosStatus native);
		};
	};
};