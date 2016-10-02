# MessagesDhConfig

## Types

* [typeMessagesDhConfigNotModified](#messagesdhconfigtypemessagesdhconfignotmodified)
* [typeMessagesDhConfig](#messagesdhconfigtypemessagesdhconfig)

## MessagesDhConfig::typeMessagesDhConfigNotModified

#### Schema:

```c++
messages.dhConfigNotModified#c0e24635 random:bytes = messages.DhConfig;
```

#### Parameters:

|Name|Type|
|----|----|
|random|QByteArray|

## MessagesDhConfig::typeMessagesDhConfig

#### Schema:

```c++
messages.dhConfig#2c221edd g:int p:bytes version:int random:bytes = messages.DhConfig;
```

#### Parameters:

|Name|Type|
|----|----|
|g|qint32|
|p|QByteArray|
|version|qint32|
|random|QByteArray|

