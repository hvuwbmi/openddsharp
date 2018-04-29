#pragma once

#pragma unmanaged 
#include <dds/DdsDcpsInfrastructureC.h>
#pragma managed

namespace OpenDDSharp {
	namespace DDS {

		/// <summary>
		/// The InconsistentTopic status indicates that a topic was attempted to be registered that already exists with different characteristics.
		/// Typically, the existing topic may have a different type associated with it.
		/// </summary>
		public value struct InconsistentTopicStatus {

		private:
			System::Int32 total_count;
			System::Int32 total_count_change;

		public:
			/// <summary>
			/// Gets the cumulative count of topics that have been reported as inconsistent.
			/// </summary>
			property System::Int32 TotalCount {
				System::Int32 get();
			};

			/// <summary>
			/// Gets the incremental count of inconsistent topics since the last time this status was accessed.
			/// </summary>
			property System::Int32 TotalCountChange {
				System::Int32 get();
			};

		internal:
			InconsistentTopicStatus(::DDS::InconsistentTopicStatus status);
			::DDS::InconsistentTopicStatus ToNative();
			void FromNative(::DDS::InconsistentTopicStatus status);
		};
	};
};
