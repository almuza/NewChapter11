//
//  Contact.h
//  MyContactList CoreData
//
//  Created by Yitref, Almaz on 5/23/14.
//  Copyright (c) 2014 Learning Mobile Apps. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Contact : NSManagedObject

@property (nonatomic, retain) NSString * cellNumber;
@property (nonatomic, retain) NSDate * birthday;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * contactName;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * phoneNumber;
@property (nonatomic, retain) NSString * streetAddress;
@property (nonatomic, retain) NSString * zipCode;
@property (nonatomic, retain) NSString * state;

@end
