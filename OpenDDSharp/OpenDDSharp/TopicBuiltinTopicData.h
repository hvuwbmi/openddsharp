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
#include <dds\DdsDcpsCoreC.h>
#pragma managed

#include "BuiltinTopicKey.h"
#include "DurabilityQosPolicy.h"
#include "DurabilityServiceQosPolicy.h"
#include "DeadlineQosPolicy.h"
#include "LatencyBudgetQosPolicy.h"
#include "LivelinessQosPolicy.h"
#include "ReliabilityQosPolicy.h"
#include "TransportPriorityQosPolicy.h"
#include "LifespanQosPolicy.h"
#include "DestinationOrderQosPolicy.h"
#include "HistoryQosPolicy.h"
#include "ResourceLimitsQosPolicy.h"
#include "OwnershipQosPolicy.h"
#include "TopicDataQosPolicy.h"

#include <vcclr.h>
#include <msclr/marshal.h>

namespace OpenDDSharp {
	namespace DDS {

		ref class Topic;

		/// <summary>
		/// Class that contains information about available <see cref="Topic" />s within the system.
		/// </summary>
		/// <remarks>
		/// The DCPSTopic topic communicates the existence of topics by means of the TopicBuiltinTopicData datatype. Each TopicBuiltinTopicData sample in a Domain represents a <see cref="Topic" /> 
		/// in that Domain: a new TopicBuiltinTopicData instance is created when a newly-added <see cref="Topic" />  is enabled. However, the instance is not disposed when a <see cref="Topic" />  is 
		/// deleted by its participant because a topic lifecycle is tied to the lifecycle of a Domain, not to the lifecycle of an individual participant. 
		/// An updated TopicBuiltinTopicData sample is written each time a <see cref="Topic" />  modifies one or more of its QoS policy values.
		/// </remarks>
		public value struct TopicBuiltinTopicData {

		private:
			OpenDDSharp::DDS::BuiltinTopicKey key;
			System::String^ name;
			System::String^ type_name;
			OpenDDSharp::DDS::DurabilityQosPolicy^ durability;
			OpenDDSharp::DDS::DurabilityServiceQosPolicy^ durability_service;
			OpenDDSharp::DDS::DeadlineQosPolicy^ deadline;
			OpenDDSharp::DDS::LatencyBudgetQosPolicy^ latency_budget;
			OpenDDSharp::DDS::LivelinessQosPolicy^ liveliness;
			OpenDDSharp::DDS::ReliabilityQosPolicy^ reliability;
			OpenDDSharp::DDS::TransportPriorityQosPolicy^ transport_priority;
			OpenDDSharp::DDS::LifespanQosPolicy^ lifespan;
			OpenDDSharp::DDS::DestinationOrderQosPolicy^ destination_order;
			OpenDDSharp::DDS::HistoryQosPolicy^ history;
			OpenDDSharp::DDS::ResourceLimitsQosPolicy^ resource_limits;
			OpenDDSharp::DDS::OwnershipQosPolicy^ ownership;
			OpenDDSharp::DDS::TopicDataQosPolicy^ topic_data;

		public:
			/// <summary>
			/// Gets the global unique identifier of the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::BuiltinTopicKey Key {
				OpenDDSharp::DDS::BuiltinTopicKey get();
			};

			/// <summary>
			/// Gets the name of the <see cref="Topic" />.
			/// </summary>
			property System::String^ Name {
				System::String^ get();
			};

			/// <summary>
			/// Gets the type name of the <see cref="Topic" />.
			/// </summary>
			property System::String^ TypeName {
				System::String^ get();
			};

			/// <summary>
			/// Gets the <see cref="DurabilityQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::DurabilityQosPolicy^ Durability {
				OpenDDSharp::DDS::DurabilityQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="DurabilityServiceQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::DurabilityServiceQosPolicy^ DurabilityService {
				OpenDDSharp::DDS::DurabilityServiceQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="DeadlineQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::DeadlineQosPolicy^ Deadline {
				OpenDDSharp::DDS::DeadlineQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="LatencyBudgetQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::LatencyBudgetQosPolicy^ LatencyBudget {
				OpenDDSharp::DDS::LatencyBudgetQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="LivelinessQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::LivelinessQosPolicy^ Liveliness {
				OpenDDSharp::DDS::LivelinessQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="ReliabilityQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::ReliabilityQosPolicy^ Reliability {
				OpenDDSharp::DDS::ReliabilityQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="TransportPriorityQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::TransportPriorityQosPolicy^ TransportPriority {
				OpenDDSharp::DDS::TransportPriorityQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="LifespanQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::LifespanQosPolicy^ Lifespan {
				OpenDDSharp::DDS::LifespanQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="DestinationOrderQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::DestinationOrderQosPolicy^ DestinationOrder {
				OpenDDSharp::DDS::DestinationOrderQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="HistoryQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::HistoryQosPolicy^ History {
				OpenDDSharp::DDS::HistoryQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="ResourceLimitsQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::ResourceLimitsQosPolicy^ ResourceLimits {
				OpenDDSharp::DDS::ResourceLimitsQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="OwnershipQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::OwnershipQosPolicy^ Ownership {
				OpenDDSharp::DDS::OwnershipQosPolicy^ get();
			};

			/// <summary>
			/// Gets the <see cref="TopicDataQosPolicy" /> attached to the <see cref="Topic" />.
			/// </summary>
			property OpenDDSharp::DDS::TopicDataQosPolicy^ TopicData {
				OpenDDSharp::DDS::TopicDataQosPolicy^ get();
			};

		internal:
			void FromNative(::DDS::TopicBuiltinTopicData native);
			::DDS::TopicBuiltinTopicData ToNative();
		};
	};
};
