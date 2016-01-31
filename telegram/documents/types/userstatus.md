# UserStatus

## Types

* [typeUserStatusEmpty](#userstatustypeuserstatusempty)
* [typeUserStatusOnline](#userstatustypeuserstatusonline)
* [typeUserStatusOffline](#userstatustypeuserstatusoffline)
* [typeUserStatusRecently](#userstatustypeuserstatusrecently)
* [typeUserStatusLastWeek](#userstatustypeuserstatuslastweek)
* [typeUserStatusLastMonth](#userstatustypeuserstatuslastmonth)

## UserStatus::typeUserStatusEmpty

#### Schema:

`userStatusEmpty#9d05049 = UserStatus;`

#### Parameters:


## UserStatus::typeUserStatusOnline

#### Schema:

`userStatusOnline#edb93949 expires:int = UserStatus;`

#### Parameters:

|Name|Type|
|----|----|
|expires|qint32|

## UserStatus::typeUserStatusOffline

#### Schema:

`userStatusOffline#8c703f was_online:int = UserStatus;`

#### Parameters:

|Name|Type|
|----|----|
|wasOnline|qint32|

## UserStatus::typeUserStatusRecently

#### Schema:

`userStatusRecently#e26f42f1 = UserStatus;`

#### Parameters:


## UserStatus::typeUserStatusLastWeek

#### Schema:

`userStatusLastWeek#7bf09fc = UserStatus;`

#### Parameters:


## UserStatus::typeUserStatusLastMonth

#### Schema:

`userStatusLastMonth#77ebc742 = UserStatus;`

#### Parameters:


