export type GraphQLIntrospectionResult = {
  queryType: { name: string };
  mutationType?: { name: string } | null;
  subscriptionType?: { name: string } | null;
  types: GraphQLType[];
  directives: GraphQLDirective[];
};

export type GraphQLType = {
  kind: string;
  name: string;
  description?: string;
  fields?: GraphQLField[] | null;
  inputFields?: GraphQLInputValue[] | null;
  interfaces?: GraphQLTypeRef[] | null;
  enumValues?: GraphQLEnumValue[] | null;
  possibleTypes?: GraphQLTypeRef[] | null;
};

export type GraphQLField = {
  name: string;
  description?: string;
  args: GraphQLInputValue[];
  type: GraphQLTypeRef;
  isDeprecated: boolean;
  deprecationReason?: string | null;
};

export type GraphQLInputValue = {
  name: string;
  description?: string;
  type: GraphQLTypeRef;
  defaultValue?: any; // eslint-disable-line @typescript-eslint/no-explicit-any
};

export type GraphQLTypeRef = {
  kind: string;
  name?: string;
  ofType?: GraphQLTypeRef | null;
};

export type GraphQLEnumValue = {
  name: string;
  description?: string;
  isDeprecated: boolean;
  deprecationReason?: string | null;
};

export type GraphQLDirective = {
  name: string;
  description?: string;
  locations: string[];
  args: GraphQLInputValue[];
};
