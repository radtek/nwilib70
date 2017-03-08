#ifndef __BLMAPI_H__
#define __BLMAPI_H__


#ifdef USE_BEMU_API
	#include "BloombergTypes/Name.h"
	#include "BloombergTypes/CorrelationID.h"
	#include "BloombergTypes/Session.h"
	#include "BloombergTypes/MessageIterator.h"
	#include "BloombergTypes/Event.h"
	#include "BloombergTypes/SessionOptions.h"
	#include "BloombergTypes/Request.h"
	#include "BloombergTypes/Datetime.h"
	#include "BloombergTypes/Element.h"
	#include "BloombergTypes/Message.h"
	#include "BloombergTypes/Service.h"
	#include "BloombergTypes/SubscriptionList.h"
	#include "BloombergTypes/EventHandler.h"

	using namespace BEmu;
#else
	#include <blpapi_defs.h>
	#include <blpapi_session.h> //also defines EventHandler
	#include <blpapi_eventdispatcher.h>
	#include <blpapi_exception.h>
	#include <blpapi_logging.h>

	#include <blpapi_name.h>
	#include <blpapi_correlationid.h>
	#include <blpapi_event.h> //also defines MessageIterator
	#include <blpapi_sessionoptions.h>
	#include <blpapi_request.h>
	#include <blpapi_datetime.h>
	#include <blpapi_service.h>
	#include <blpapi_element.h>
	#include <blpapi_message.h>
	#include <blpapi_subscriptionlist.h>

	using namespace BloombergLP;
	using namespace BloombergLP::blpapi;
#endif

namespace {
	const Name SECURITY_DATA("securityData");
	const Name SECURITY("security");
	const Name FIELD_DATA("fieldData");
	const Name RESPONSE_ERROR("responseError");
	const Name SECURITY_ERROR("securityError");
	const Name FIELD_EXCEPTIONS("fieldExceptions");
	const Name FIELD_ID("fieldId");
	const Name ERROR_INFO("errorInfo");
	const Name CATEGORY("category");
	const Name MESSAGE("message");
	const Name REASON("reason");
	const Name SESSION_TERMINATED("SessionTerminated");
	const Name SESSION_STARTUP_FAILURE("SessionStartupFailure");
}

#endif __BLMAPI_H__

