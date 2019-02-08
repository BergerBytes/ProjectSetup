//  Copyright © 2018 ObjectBox. All rights reserved.

#import <Foundation/Foundation.h>

#ifndef Constants_h
#define Constants_h

NS_SWIFT_NAME(EntityId)
typedef uint64_t OBXEntityId;

/// Wrapper for `flatbuffers::Offset<flatbuffers::String>` that enables exposing
/// the collector interface to Swift.
typedef uint32_t OBXDataOffset;

extern NSString *const OBXErrorNameKey;

extern NSErrorDomain const OBXErrorDomain;

extern NSErrorDomain const OBXErrorDomainFileCorrupt;
typedef NS_ERROR_ENUM(OBXErrorDomainFileCorrupt, OBXErrorFileCorrupt) {
    OBXErrorFileCorruptCode = 900000002,
};

extern NSErrorDomain const OBXErrorDomainNonUniqueResult;
typedef NS_ERROR_ENUM(OBXErrorDomainNonUniqueResult, OBXErrorNonUniqueResult) {
    OBXErrorNonUniqueResultCode = 900000003,
};

extern NSErrorDomain const OBXErrorDomainUniqueViolation;
typedef NS_ERROR_ENUM(OBXErrorDomainUniqueViolation, OBXErrorUniqueViolation) {
    OBXErrorUniqueViolationCode = 900000004,
};

extern NSErrorDomain const OBXErrorDomainSchema;
typedef NS_ERROR_ENUM(OBXErrorDomainSchema, OBXErrorSchema) {
    OBXErrorSchemaCode = 900000005
};


typedef NSString OBXPropertyAlias;

#endif /* Constants_h */
