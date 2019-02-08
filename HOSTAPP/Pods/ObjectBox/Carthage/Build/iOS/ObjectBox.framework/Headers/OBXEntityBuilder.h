//  Copyright © 2018 Christian Tietze. All rights reserved. Distributed under the MIT License.

#import <Foundation/Foundation.h>
#import "OBXProperty.h"

@class OBXEntityInfo;

NS_ASSUME_NONNULL_BEGIN
NS_SWIFT_NAME(EntityBuilder)
@interface OBXEntityBuilder<T> : NSObject

@property (nonatomic, readonly, copy) OBXEntityInfo *entityInfo;

- (instancetype)init __attribute__((unavailable));

- (void)addPropertyNamed:(NSString *)name type:(OBXEntityPropertyType)type id:(uint32_t)propertyID uid:(uint64_t)uid NS_SWIFT_NAME(addProperty(name:type:id:uid:));
- (void)addPropertyNamed:(NSString *)name type:(OBXEntityPropertyType)type id:(uint32_t)propertyID uid:(uint64_t)UID indexId:(uint32_t)indexID indexUid:(uint64_t)indexUID NS_SWIFT_NAME(addProperty(name:type:id:uid:indexId:indexUid:));
- (void)addPropertyNamed:(NSString *)name type:(OBXEntityPropertyType)type flags:(OBXEntityPropertyFlag)flags id:(uint32_t)propertyID uid:(uint64_t)uid NS_SWIFT_NAME(addProperty(name:type:flags:id:uid:));
- (void)addPropertyNamed:(NSString *)name type:(OBXEntityPropertyType)type flags:(OBXEntityPropertyFlag)flags id:(uint32_t)propertyID uid:(uint64_t)UID indexId:(uint32_t)indexID indexUid:(uint64_t)indexUID NS_SWIFT_NAME(addProperty(name:type:flags:id:uid:indexId:indexUid:));

- (void)addRelationNamed:(NSString *)name targetEntityInfo:(OBXEntityInfo *)targetEntityInfo id:(uint32_t)propertyID uid:(uint64_t)propertyUID indexId:(uint32_t)indexID indexUid:(uint64_t)indexUID NS_SWIFT_NAME(addRelation(name:targetEntityInfo:id:uid:indexId:indexUid:));
- (void)addRelationNamed:(NSString *)name targetEntityInfo:(OBXEntityInfo *)targetEntityInfo flags:(OBXEntityPropertyFlag)flags id:(uint32_t)propertyID uid:(uint64_t)propertyUID indexId:(uint32_t)indexID indexUid:(uint64_t)indexUID NS_SWIFT_NAME(addRelation(name:targetEntityInfo:flags:id:uid:indexId:indexUid:));

@end
NS_ASSUME_NONNULL_END
