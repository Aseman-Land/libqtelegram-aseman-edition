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

```c++
userStatusEmpty#9d05049 = UserStatus;
```

#### Parameters:


## UserStatus::typeUserStatusOnline

#### Schema:

```c++
userStatusOnline#edb93949 expires:int = UserStatus;
```

#### Parameters:

|Name|Type|
|----|----|
|expires|qint32|

## UserStatus::typeUserStatusOffline

#### Schema:

```c++
userStatusOffline#8c703f was_online:int = UserStatus;
```

#### Parameters:

|Name|Type|
|----|----|
|wasOnline|qint32|

## UserStatus::typeUserStatusRecently

#### Schema:

```c++
userStatusRecently#e26f42f1 = UserStatus;
```

#### Parameters:


## UserStatus::typeUserStatusLastWeek

#### Schema:

```c++
userStatusLastWeek#7bf09fc = UserStatus;
```

#### Parameters:


## UserStatus::typeUserStatusLastMonth

#### Schema:

```c++
userStatusLastMonth#77ebc742 = UserStatus;
```

#### Parameters:


