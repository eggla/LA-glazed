# Glazed Portfolio

Fancy portfolio views using MD Portfolio module (included)

## Workflow

* Develop and Test locally on your own machine
* Push  code to a development, feature or issue branch. Create pull request.
* I will test and give feedback
* If code is OK I will merge with the 7.x branch.
* Branches should be named 7.x-yourname-branchname

Branch naming examples:
```
7.x-jur-dev
```
```
7.x-jur-issue_777789
```
```
7.x-jur-feature_name
```


### Prerequisites

* [Drupal 7](https://www.drupal.org/project/drupal)
* [CMS Portfolio](https://www.drupal.org/project/cms_portfolio) (Feature module containing node type that is used on views)
* [Views](https://www.drupal.org/project/views)
* [MD Portfolio] Included (3rd party premium module from codecanyon).

### Installing

Installs like any other module.

To add Glazed Page Design settings to a node type add the Field Collection in the Manage Fields form of your type.

### Developing

[Grunt](http://gruntjs.com/) is used to parse sass to CSS and combine JS files. Don't run npm install, development modules are included.

```
grunt
```

## Versioning

This project uses old school drupal versioning. For the versions available, see the [tags on this repository](https://github.com/jjroelofs/glazed/tags).

### Code Standards and Best Practices

* https://trello.com/b/LdWR68Cm/sooperthemes-drupal-wiki
* https://www.drupal.org/coding-standards
