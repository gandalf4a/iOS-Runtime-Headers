/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPropertyDescription, NSString, NSSQLEntity;



@interface NSSQLProperty : NSStoreMapping 
{
    NSString *_name;
    NSPropertyDescription *_propertyDescription;
    NSSQLEntity *_entity;
    NSUInteger _propertyType;
}


- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)dealloc;
- (void)setPropertyDescription:(id)arg1;
- (id)columnName;
- (id)externalName;
- (id)name;
- (void)_setName:(id)arg1;
- (NSUInteger)propertyType;
- (BOOL)isColumn;
- (BOOL)isAttribute;
- (BOOL)isPrimaryKey;
- (BOOL)isForeignKey;
- (BOOL)isForeignEntityKey;
- (BOOL)isEntityKey;
- (BOOL)isOptLockKey;
- (BOOL)isRelationship;
- (BOOL)isToOne;
- (BOOL)isToMany;
- (BOOL)isManyToMany;
- (BOOL)isEqual:(id)arg1;
- (id)propertyDescription;
- (id)entity;
- (id)description;
- (NSUInteger)slot;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)setEntityForReadOnlyFetch:(id)arg1;

@end